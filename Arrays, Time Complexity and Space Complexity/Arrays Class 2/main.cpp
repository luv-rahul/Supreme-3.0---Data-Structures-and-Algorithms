#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void print(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int singleNumber(vector<int> nums)
{
    int ans = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        ans = ans ^ nums[i];
    }
    return ans;
}

void sortZeroesAndOnes(int arr[], int size)
{
    int zeroCount = 0;
    int oneCount = 0;

    // Counting Zeroes and Ones
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

    /*Inserting Elements*/

    // Inserting Zero
    for (int i = 0; i < zeroCount; i++)
    {
        arr[i] = 0;
    }

    // Inserting One
    for (int i = zeroCount; i < size; i++)
    {
        arr[i] = 1;
    }
}

void printAllPairs(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "[" << arr[i] << "," << arr[j] << "]" << endl;
        }
    }
}

bool checkTwoSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                return true;
            }
        }
    }
    return false;
}

pair<int, int> twoSumPair(int arr[], int size, int target)
{
    pair<int, int> p = make_pair(-1, -1);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                p.first = arr[i];
                p.second = arr[j];
                return p;
            }
        }
    }
    return p;
}

void checkTwoSumUsingArray(int arr[], int size, int target, int ans[])
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if ((arr[i] + arr[j]) == target)
            {
                ans[0] = arr[i];
                ans[1] = arr[j];
                return;
            }
        }
    }
}

void printTriplets(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            for (int k = 0; k < size; k++)
            {
                cout << "[" << arr[i] << "," << arr[j] << "," << arr[k] << "]" << endl;
                count++;
            }
        }
    }
    cout << "Total Triplets: " << count << endl;
}

void threeSum(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            for (int k = j + 1; k < size; k++)
            {
                if ((arr[i] + arr[j] + arr[k]) == target)
                {
                    cout << "[" << arr[i] << "," << arr[j] << "," << arr[k] << "]" << endl;
                }
            }
        }
    }
}

// Shift / Rotate and Array
void shiftAnArray(int arr[], int size, int shift)
{
    vector<int> temp;

    /**
     * If size of array = 7, we will get same array if shift by 7.
     * But if shift = 8, => shift by 1.
     */
    if (shift > size)
    {
        shift = shift % size;
    }

    /** Size = 0, No Shifting */
    if (shift == 0)
    {
        return;
    }

    // Copy elements in temp array
    for (int i = size - shift; i < size; i++)
    {
        int data = arr[i];
        temp.push_back(data);
    }

    // Last element will be shifted to shiftIndex
    for (int i = size - 1; i >= 0; i--)
    {
        if ((i - size) >= 0)
        {
            arr[i] = arr[i - shift];
        }
    } 

    // Push elements from temp array
    for (int i = 0; i < shift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    // *136. Single Number
    // vector<int> nums = {2, 4, 1, 4, 1};
    // cout << "Single Number: " << singleNumber(nums) << endl;

    // *Sort zeroes and ones
    // int arr[] = {0, 1, 1, 1, 0, 0, 1};
    // int size = 7;
    // sortZeroesAndOnes(arr, size);
    // print(arr, size);

    // Inbuilt Sort Function
    // sort(arr, arr + size); // #include<algorithm>
    // print(arr, size);

    //* Print All Pairs
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // printAllPairs(arr, size);

    // * Two Sum
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // int target = 60;
    // bool ans = checkTwoSum(arr, size, target);
    // cout << "Found or not: " << ans << endl;

    // Two Sum Pair
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // int target = 60;
    // pair<int, int> ans = twoSumPair(arr, size, target);
    // if (ans.first == -1 && ans.second == -1)
    // {
    //     cout << "Pair not found!" << endl;
    // }
    // else
    // {
    //     cout << "Pair Found: " << ans.first << "," << ans.second << endl;
    // }

    // Two Sum Using Array
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // int target = 60;
    // int ans[] = {-1, -1};
    // checkTwoSumUsingArray(arr, size, target, ans);
    // if (ans[0] == -1 && ans[1] == -1)
    // {
    //     cout << "Pair not found!" << endl;
    // }
    // else
    // {
    //     cout << "Pair Found: " << ans[0] << "," << ans[1] << endl;
    // }

    // * Print All Triplets
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // printTriplets(arr, size);

    // * Three Sum
    // int arr[] = {10, 20, 30, 40};
    // int size = 4;
    // int target = 70;
    // threeSum(arr, size,target);

    // * Shift an Array
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;
    int shift = 2;
    shiftAnArray(arr, size, shift);
    print(arr, size);
    return 0;
}