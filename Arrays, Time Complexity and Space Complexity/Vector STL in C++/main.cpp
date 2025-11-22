#include <iostream>
#include <vector>
using namespace std;

void fun(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout << v.at(i) << " ";
    }
    cout << endl;
}

// For-Each Loop
void print2(vector<int> v)
{
    for (auto it : v)
    {
        cout << it << " ";
    }
    cout << endl;
}

int main()
{
    /*Static Array*/
    int arr[5] = {10, 20, 30, 40, 50};
    int size = 5;
    fun(arr, size);

    /*Dynamic Array*/
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    int *arr = new int[n]; // Each element would be 0 or garbage
    // Taking input for n elements
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> arr[i];
    }
    // Let me insert more items
    for (int i = 0; i < 10; i++)
    {
        arr[n + i] = 80; // !CRASH
    }
    fun(arr, n);

    /*Vector*/
    vector<int> v;

    // push_back
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    print(v);

    // size and capacity
    while (true)
    {
        int data;
        cout << "Enter data: ";
        cin >> data;
        v.push_back(data);
        cout << "Capacity: " << v.capacity() << " Size: " << v.size() << endl;
    }

    // pop_back
    v.pop_back();
    print(v);
    v.pop_back();
    print(v);
    v.pop_back();
    print(v);
    v.pop_back(); // ! ERROR - Can't delete from empty vector
    print(v);

    // Input
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int data;
        cout << "Enter element at index " << i << ": ";
        cin >> data;
        v.push_back(data);
    }

    // Taking more input
    for (int i = 0; i < 10; i++)
    {
        v.push_back(80);
    }
    print(v);

    // clear
    v.clear();
    print(v);
    v.push_back(50);
    print(v);

    /*Initialise*/
    vector<int> arr;         // Default with no data and size = 0.
    vector<int> arr2(5, -1); // Init with n size with specific data.
    vector<int> arr3 = {1, 2, 3, 4, 5};
    vector<int> arr4{1, 2, 3, 4, 5};

    /*Copy Vector*/
    vector<int> arr5 = {1, 2, 3, 4, 5};
    vector<int> arr6(arr5);
    print(arr6);

    // front & back
    vector<char> v;
    v.push_back('A');
    v.push_back('B');
    v.push_back('C');
    cout << "Front Element: " << v[0] << endl;
    cout << "Front Element: " << v.front() << endl;
    cout << "Back Element: " << v[v.size() - 1] << endl;
    cout << "Back Element: " << v.back() << endl;

    // for-each loop
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    print2(v);
    return 0;
}