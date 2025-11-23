#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> marks(5, -1);
    vector<int> miles(10);
    vector<int> distances(15, 0);

    // begin & end
    cout << *(marks.begin()) << endl;

    // push_back
    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);
    marks.push_back(60);

    // size
    cout << "Size:" << marks.size() << endl;

    // pop_back
    marks.pop_back();
    cout << "Size:" << marks.size() << endl;

    // front & back
    cout << "Front Element: " << marks.front() << endl;
    cout << "Back Element: " << marks.back() << endl;

    // empty
    if (marks.empty())
    {
        cout << "Vector is empty." << endl;
    }
    else
    {
        cout << "Vector isn't empty." << endl;
    }

    // [] & at()
    marks[0] = 100;
    cout << marks[0] << endl;

    // * Note: The blocks must be assigned before accessing the elements
    vector<int> age;
    cout << age[0] << endl; // Segmentation Fault

    vector<int> age(10);
    cout << age[0] << endl; // It Works!

    cout << marks.at(0) << endl;

    // capacity
    cout << "Capacity: " << marks.capacity() << endl;
    cout << "Size: " << marks.size() << endl;

    // reserve
    vector<int> marks;
    marks.reserve(10);
    cout << "Capacity: " << marks.capacity() << endl;

    // max_size
    cout << "Max size: " << marks.max_size() << endl;

    // clear
    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    cout << "Size: " << marks.size() << endl;

    marks.clear();
    cout << "Size: " << marks.size() << endl;

    // insert
    marks.insert(marks.begin(), 50);
    cout << "Size: " << marks.size() << endl;
    cout << marks[0] << endl;

    // erase
    marks.erase(marks.begin(), marks.end());
    cout << "Size: " << marks.size() << endl;

    // swap
    vector<int> first;
    first.push_back(10);
    first.push_back(20);
    first.push_back(30);
    first.push_back(40);

    vector<int> second;
    second.push_back(100);
    second.push_back(200);
    second.push_back(300);
    second.push_back(400);

    first.swap(second);

    cout << first[0] << " " << first[1] << " " << first[2] << " " << first[3] << endl;
    cout << second[0] << " " << second[1] << " " << second[2] << " " << second[3] << endl;

    // for-each loop
    for (int i : first)
    {
        cout << i << " ";
    }

    // Traverse using Iterator
    vector<int> marks;
    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    vector<int>::iterator it = marks.begin();
    while (it != marks.end())
    {
        cout << *it << " ";
        it++;
    }

    // 2D Array
    vector<vector<int>> arr(4, vector<int>(3, 0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();

    // 2D vector with different columns
    vector<vector<int>> brr(4);
    brr[0] = vector<int>(3);
    brr[1] = vector<int>(2);
    brr[2] = vector<int>(4);
    brr[3] = vector<int>(2);

    return 0;
}