#include <iostream>
#include <vector>
using namespace std;

void mergeSortedArrays(int arr[], int sizeArr, int brr[], int sizeBrr, vector<int> &ans)
{
    int i = 0; // i -> arr
    int j = 0; // j -> brr
    while ((i < sizeArr) && (j < sizeBrr))
    {
        if (arr[i] < brr[j])
        {
            ans.push_back(arr[i]);
            i++;
        }
        else
        {
            ans.push_back(brr[j]);
            j++;
        }
    }

    /**
     * If there are some elements left in arr, then i must be inside arr i.e. i < sizeArr
     */
    while (i < sizeArr)
    {
        ans.push_back(arr[i]);
        i++;
    }

    /**
     * If there are some elements left in brr, then j must be inside brr i.e. j < sizeBrr
     */
    while (j < sizeBrr)
    {
        ans.push_back(brr[j]);
        j++;
    }
}


int main()
{
    //* Merge Two Sorted Arrays
    // int arr[] = {10, 30, 50, 70};
    // int sizeArr = 4;
    // int brr[] = {20, 40, 60, 80, 90, 100};
    // int sizeBrr = 6;
    // vector<int> ans;
    // mergeSortedArrays(arr, sizeArr, brr, sizeBrr, ans);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }

    return 0;
}