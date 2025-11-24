#include <iostream>
#include <algorithm>
using namespace std;

bool binarySearch(int arr[], int size, int target)
{
    int start = 0;
    int end = size - 1;
    // int mid = (start + end) / 2;
    int mid = (start + (end - start) / 2);

    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return true;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        // mid = (start + end) / 2;
        mid = (start + (end - start) / 2);
    }
    return false;
}

void firstOccurence(int arr[], int size, int target, int &firstIndex)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // Store and Compute
            firstIndex = mid;
            end = mid - 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
}

void lastOccurence(int arr[], int size, int target, int &lastIndex)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            // Store and Compute
            lastIndex = mid;
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
}

int missingNumber(int arr[], int size)
{
    int missingNumber = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] - mid == 1)
        {
            // Store and Compute
            missingNumber = mid;
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    if (missingNumber == -1)
    {
        return size;
    }
}

int main()
{
    // * 704. Binary Search
    int arr[] = {-1, 0, 3, 5, 9, 12};
    int size = 6;
    int target = 9;
    bool ans = binarySearch(arr, size, target);
    cout << "Found or not: " << ans << endl;

    // STL - BinarySearch
    bool ans = binary_search(arr, arr + size, target);
    cout << ans << endl;

    // * 34.First Occurence & Last Occurence
    int arr[] = {20, 20, 20, 20, 20, 20, 50};
    int size = 7;
    int target = 20;
    int firstIndex = -1;
    int lastIndex = -1;
    firstOccurence(arr, size, target, firstIndex);
    cout << "First Occurence Index: " << firstIndex << endl;

    lastOccurence(arr, size, target, lastIndex);
    cout << "Last Occurence Index: " << lastIndex << endl;

    // * Total Occurence
    int totalOccurence = lastIndex - firstIndex + 1;
    cout << "Total Occurence: " << totalOccurence << endl;

    // * 268. Missing Number
    int arr[] = {0, 1, 2, 3, 4, 5, 6};
    int size = 7;
    int missingNo = missingNumber(arr, size);
    cout << "Missing Number: " << missingNo << endl;
    return 0;
}