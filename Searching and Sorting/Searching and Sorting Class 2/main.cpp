#include <iostream>
#include <vector>
using namespace std;

int findPeakElementIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);

    while (start < end)
    {
        // Line A
        if (arr[mid] < arr[mid + 1])
        {
            // Peak element is on right
            start = mid + 1;
        }
        // Line B
        else
        {
            // Peak element may be on left
            end = mid; // may be standing on ans
        }
        mid = (start + (end - start) / 2);
    }
    return start;
}

// Peak Element using Store and Compute
int peakElement(int arr[], int size)
{
    int peakIndex = -1;
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        else if (arr[mid] > arr[mid + 1])
        {
            peakIndex = mid;
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return peakIndex;
}

int pivotIndex(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    int mid = (start + (end - start) / 2);

    // Single Element -> Pivot
    if (start == end)
    {
        return start;
    }

    while (start <= end)
    {
        // Line A
        if ((mid + 1 < size) && arr[mid] < arr[mid + 1])
        {
            start = mid + 1;
        }
        // Line B
        else if (arr[mid] < arr[start])
        {
            end = mid - 1;
        }
        // On Pivot
        else if (arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        mid = (start + (end - start) / 2);
    }
}

int binarySearch(int arr[], int start, int end, int target)
{
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if (arr[mid] == target)
        {
            return mid;
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
    return -1;
}

void searchInRotatedArray(int arr[], int size, int target)
{
    int pivotIndexAns = pivotIndex(arr, size);
    if (target >= arr[0] && target <= arr[pivotIndexAns])
    {
        int start = 0;
        int end = pivotIndexAns;
        cout << "Target Position: " << binarySearch(arr, start, end, target);
    }
    else
    {
        int start = pivotIndexAns + 1;
        int end = size - 1;
        cout << "Target Position: " << binarySearch(arr, start, end, target);
    }
}

int squareRoot(int n)
{
    int sqrt = -1;
    int start = 0;
    int end = n;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        if ((mid * mid) == n)
        {
            return mid;
        }
        // mid * mid is greater than n
        else if ((mid * mid) > n)
        {
            end = mid - 1;
        }
        // mid * mid is less than n
        else
        {
            sqrt = mid;
            start = mid + 1;
        }
        mid = (start + (end - start) / 2);
    }
    return sqrt;
}

bool searchA2DMatrix(vector<vector<int>> &matrix, int target)
{
    int rows = matrix.size();
    int columns = matrix[0].size();
    int n = rows * columns;

    int start = 0;
    int end = n - 1;
    int mid = (start + (end - start) / 2);
    while (start <= end)
    {
        int rowIndex = mid / columns;
        int columnIndex = mid % columns;

        if (matrix[rowIndex][columnIndex] == target)
        {
            return true;
        }
        else if (target > matrix[rowIndex][columnIndex])
        {
            start = mid + 1;
        }
        else if (target < matrix[rowIndex][columnIndex])
        {
            end = mid - 1;
        }
        mid = (start + (end - start) / 2);
    }
    return -1;
}

int main()
{
    // * 853. Peak Index in a mountain array
    int arr[] = {10, 20, 70, 60, 50, 30, 15, 5};
    int size = 8;
    int peakIndex = findPeakElementIndex(arr, size);
    cout << "Peak Index: " << peakIndex << endl;

    // Using Store and Compute Approach
    int arr[] = {10, 20, 70, 60, 50, 30, 15, 5};
    int size = 8;
    int peakIndex = peakElement(arr, size);
    cout << "Peak Index: " << peakIndex << endl;

    // * 33. Search in a Sorted & Rotated Array - Pivot Index + Search
    int arr[] = {40, 50, 60, 70, 10, 20, 30};
    int size = 7;
    int target = 70;
    searchInRotatedArray(arr, size, target);

    // * 69. Square Root - Search Space Pattern
    int n = 54;
    cout << "Square root of " << n << ": " << squareRoot(n) << endl;

    // * 74. Search a 2D matrix
    vector<vector<int>> matrix = {
        {1, 3, 5, 7},
        {10, 11, 16, 20},
        {23, 30, 34, 60}};

    int target = 34;
    bool ans  = searchA2DMatrix(matrix, target);
    cout << "Found or not: " << ans << endl;
    return 0;
}