#include <iostream>
using namespace std;

class Node
{
public:
    // Attributes
    int data;
    Node *next;

    // Construtor
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }
};

Node *insertAtHead(int value, Node *&head, Node *&tail)
{

    // LL is empty. It means head and tail pointing to NULL.
    if (head == NULL && tail == NULL)
    {
        // 1. Create a new Node
        Node *newNode = new Node(value);
        // 2. Head point to new node
        head = newNode;
        // 3. Tail also points to new node
        tail = newNode;
    }
    else
    {
        // LL isn't empty.
        // 1. Create a new node
        Node *newNode = new Node(value);
        // 2. newNode's next points to head
        newNode->next = head;
        // 3. head points to newNode
        head = newNode;
    }
    return head;
}

Node *insertAtTail(int value, Node *&head, Node *&tail)
{
    // If LL is empty, It means, head & tail is pointing to NULL.
    if (head == NULL && tail == NULL)
    {
        // 1. Create a new Node
        Node *newNode = new Node(value);
        // 2. head points to new Node
        head = newNode;
        // 3. tail points to new Node
        tail = newNode;
    }
    // LL isn't empty
    else
    {
        // 1. Create a new Node
        Node *newNode = new Node(value);
        // 2. tail and head points to first node earlier. Now tail->next points to new node on right.
        tail->next = newNode;
        // 3. tail should also points to new Node on right.
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

void insertAtPosition(int value, int position, Node *&head, Node *&tail)
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

        // Reach to the position to insert
        for (int i = 1; i < position - 1; i++)
        {
            temp = temp->next;
        }

        // 1. Create a Node
        Node *newNode = new Node(value);

        // 2. newNode->next points to where the temp->next pointing
        newNode->next = temp->next;

        // 3. temp->next points to where the newNode
        temp->next = newNode;
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

bool searchLinkedList(Node *head, int target)
{
    int position = 1;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == target)
        {
            cout << "Position: " << position << endl;
            return true;
        }
        temp = temp->next;
        position++;
    }
    return false;
}

void deleteNodeFromLinkedList(int position, Node *&head, Node *&tail)
{
    // If LL is empty
    if (head == NULL && tail == NULL)
    {
        cout << "Invalid Deletion: Linked List is empty!" << endl;
    }
    // If Single Node is present
    else if (head == tail)
    {
        Node *temp = head;
        head = NULL;
        tail = NULL;
        delete temp;
    }
    // If Multiple Nodes are present
    else
    {
        if (position == 1)
        {
            Node *temp = head;
            head = temp->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            // prev   current(delete)  forward
            Node *prev = head;
            for (int i = 1; i < position - 1; i++)
            {
                prev = prev->next;
            }
            Node *current = prev->next;
            Node *forward = current->next;
            prev->next = forward;
            current->next = NULL;
            delete current;
        }
    }
}

int main()
{
    /*Node Creation*/
    // Node first(10); // Stack Memory
    // Node *first = new Node(10); // Dynamic Memory

    /*Insertion*/
    // insertAtHead
    Node *head = NULL;
    Node *tail = NULL;
    head = insertAtHead(10, head, tail);
    head = insertAtHead(20, head, tail);
    head = insertAtHead(30, head, tail);
    print(head);

    // insertAtTail
    tail = insertAtTail(40, head, tail);
    tail = insertAtTail(50, head, tail);
    tail = insertAtTail(60, head, tail);
    print(head);

    // insertAtPosition
    insertAtPosition(70, 5, head, tail);
    print(head);

    // Searching
    int target = 50;
    bool ans = searchLinkedList(head, target);
    cout << "Found or not: " << ans << endl;

    deleteNodeFromLinkedList(7, head, tail);
    print(head);
    return 0;
}