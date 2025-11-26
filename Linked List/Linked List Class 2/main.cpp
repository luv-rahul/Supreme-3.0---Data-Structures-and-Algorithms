#include <iostream>
using namespace std;

class Node
{

public:
    Node *prev;
    int data;
    Node *next;

    Node(int value)
    {
        this->data = value;
        this->prev = NULL;
        this->next = NULL;
    }
};

Node *insertAtHead(int value, Node *&head, Node *&tail)
{
    // LL is empty
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    // LL isn't empty
    else
    {
        // 1. Create a Node
        Node *newNode = new Node(value);

        // 2. newNode-> next points to head
        newNode->next = head;

        // 3. head->prev points to newNode
        head->prev = newNode;

        // 4. Shift head to newNode
        head = newNode;
    }
    return head;
}

Node *insertAtTail(int value, Node *&head, Node *&tail)
{
    // LL is empty
    if (head == NULL && tail == NULL)
    {
        Node *newNode = new Node(value);
        head = newNode;
        tail = newNode;
    }
    // LL isn't empty
    else
    {
        Node *newNode = new Node(value);
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    return tail;
}

int getLength(Node *head)
{
    int length = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

Node *insertAtPosition(int value, int position, Node *&head, Node *&tail)
{
    int length = getLength(head);

    if (position == 1)
    {
        insertAtHead(value, head, tail);
    }
    else if (position == length + 1)
    {
        insertAtTail(value, head, tail);
    }
    else if (position > 1 && position <= length)
    {
        Node *temp = head;

        // Jump to required positon
        for (int i = 0; i < position - 2; i++)
        {
            temp = temp->next;
        }

        // 1. Create a node
        Node *newNode = new Node(value);

        // 2. Pointers
        Node *forward = temp->next;
        newNode->next = forward;
        forward->prev = newNode;
        temp->next = newNode;
        newNode->prev = temp;
    }
    else
    {
        cout << "Invalid Position" << endl;
    }
}

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void printReverse(Node *tail)
{
    Node *temp = tail;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->prev;
    }
    cout << endl;
}

bool searchDoublyLinkedList(Node *head, int target)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

void deleteNodeFromDoublyLinkedList(int position, Node *&head, Node *&tail)
{
    // LL ie empty
    if (head == NULL && tail == NULL)
    {
        cout << "Invalid Deletion!. Linked List is empty!" << endl;
        return;
    }
    // Single Element
    else if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    // Multiple Elements are Present
    else
    {
        int length = getLength(head);
        // Delete Head Node
        if (position == 1)
        {
            Node *temp = head;
            head = temp->next;
            head->prev = NULL;
            temp->next = NULL;
            delete temp;
        }
        // Delete Tail Node
        else if (position == length)
        {
            Node *temp = tail;
            tail = temp->prev;
            tail->next = NULL;
            temp->prev = NULL;
            delete temp;
        }
        // Deleting mid Node
        else if (position > 1 && position < length)
        {
            Node *backward = head;
            // Move to required position
            for (int i = 0; i < position - 2; i++)
            {
                backward = backward->next;
            }

            Node *current = backward->next;
            Node *forward = current->next;
            backward->next = forward;
            forward->prev = backward;
            current->prev = NULL;
            current->next = NULL;
            delete current;
        }
        else
        {
            cout << "Invalid Deletion. Out of Linked List" << endl;
        }
    }
}

int main()
{
    // Node *node = new Node(10); // NULL <- 10 -> NULL

    /*Insertion*/
    Node *head = NULL;
    Node *tail = NULL;
    head = insertAtHead(10, head, tail);
    head = insertAtHead(20, head, tail);
    print(head);

    // Reverse Print
    printReverse(tail);

    // insertAtTail
    tail = insertAtTail(30, head, tail);
    tail = insertAtTail(40, head, tail);
    print(head);

    // insertAtPositon
    insertAtPosition(50, 4, head, tail);
    print(head);

    // Search
    int target = 20;
    bool ans = searchDoublyLinkedList(head, target);
    cout << "Found or not: " << ans << endl;

    // Delete
    deleteNodeFromDoublyLinkedList(6, head, tail);
    print(head);
    return 0;
}