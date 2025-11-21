#include <iostream>
#include <limits.h>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void solve(int arr[], int size)
{
    for (int index = 0; index < size; index++)
    {
        arr[index] *= 10;
    }
    cout << endl;
}

bool linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return true;
        }
    }
    return false;
}

int findMaximum(int arr[], int size)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        // if (arr[i] >= maxAns)
        // {
        //     maxAns = arr[i];
        // }
        maxAns = max(arr[i], maxAns);
    }
    return maxAns;
}

int findMinimum(int arr[], int size)
{
    int minAns = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        minAns = min(arr[i], minAns);
    }
    return minAns;
}

void countZeroesAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeroCount++;
        }
        else if (arr[i] == 1)
        {
            oneCount++;
        }
    }
    cout << "Number of Zeroes: " << zeroCount << endl;
    cout << "Number of Ones: " << oneCount << endl;
}

void extremePrinting(int arr[], int size)
{
    int i = 0;
    int j = size - 1;
    while (i <= j)
    {
        if (arr[i] == arr[j])
        {
            cout << arr[i] << " ";
            break;
        }
        else
        {
            cout << arr[i] << " ";
            i++;
            cout << arr[j] << " ";
            j--;
        }
    }
}

int main()
{
    /*Creation*/
    int arr[10];
    // int brr[]; // error: storage size of 'brr' isn't known
    int crr[] = {10, 20, 40, 70, 90};
    int drr[4] = {0};

    cout << drr[0] << endl;
    cout << crr[0] << endl;
    cout << crr[1] << endl;
    cout << crr[2] << endl;
    cout << crr[3] << endl;
    cout << crr[4] << endl;
    cout << crr[5] << endl; // !Garbage value or Segmentation Fault

    /*Fill Method*/
    int arr[4];
    fill(arr, arr + 4, 101);
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << endl;

    /*Input*/
    int arr[10];
    for (int index = 0; index < 10; index++)
    {
        cout << "Enter the value at index: " << index << ": ";
        cin >> arr[index];
    }

    /*Output*/
    for (int index = 0; index < 10; index++)
    {
        cout << arr[index] << " ";
        // cout << index[arr] << " ";
    }

    /*Functions*/
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    print(arr, size);

    solve(arr, size);
    print(arr, size);

    /*Algorithm - Linear Search*/
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int target = 500;
    int ans = linearSearch(arr, size, target);
    cout << "Found or not: " << ans << endl;

    /*Maximum Element & Minimum Element*/
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int maxAns = findMaximum(arr, size);
    cout << "Maximum Element: " << maxAns << endl;
    int minAns = findMinimum(arr, size);
    cout << "Minimum Element: " << minAns << endl;

    /*Count Zeroes and Ones*/
    int arr[] = {0, 1, 1, 1, 0, 0, 1};
    int size = 7;
    countZeroesAndOnes(arr, size);

    /*Extreme Printing*/
    int arr[] = {10, 20, 30, 40, 50, 60, 70};
    int size = 7;
    extremePrinting(arr, size);
    return 0;
}