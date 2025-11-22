#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

bool searchIn2DArray(int arr[][4], int rowSize, int colSize, int target)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < colSize; col++)
        {
            if (arr[row][col] == target)
            {
                return true;
            }
        }
    }
    return false;
}

bool search2DVectorArray(vector<vector<int>> &arr, int target)
{
    int rowSize = arr.size();
    int colSize = arr[0].size();
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            if (arr[i][j] == target)
            {
                return true;
            }
        }
    }
    return false;
}

int findMinimumElement(int arr[][4], int rowSize, int colSize)
{
    int minAns = INT_MAX;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            minAns = min(arr[i][j], minAns);
        }
    }
    return minAns;
}

int findMaximumElement(int arr[][4], int rowSize, int colSize)
{
    int maxAns = INT_MIN;
    for (int i = 0; i < rowSize; i++)
    {
        for (int j = 0; j < colSize; j++)
        {
            maxAns = max(arr[i][j], maxAns);
        }
    }
    return maxAns;
}

void rowWiseSum(int arr[][4], int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        int sum = 0;
        for (int column = 0; column < columnSize; column++)
        {
            sum = sum + arr[row][column];
        }
        cout << "Sum of Row " << row << ": " << sum << endl;
    }
    cout << endl;
}

void columnWiseSum(int arr[][4], int rowSize, int columnSize)
{
    for (int column = 0; column < columnSize; column++)
    {
        int sum = 0;
        for (int row = 0; row < rowSize; row++)
        {
            sum = sum + arr[row][column];
        }
        cout << "Sum of Column " << column << ": " << sum << endl;
    }
    cout << endl;
}

void diagonalSum(int arr[][3], int rowSize, int columnSize)
{
    int sum = 0;
    for (int row = 0; row < rowSize; row++)
    {
        sum = sum + arr[row][row];
    }
    cout << "Sum of diagonal: " << sum << endl;
}

void transposeOfMatrix(int arr[][3], int rowSize, int columnSize)
{
    for (int row = 0; row < rowSize; row++)
    {
        for (int column = row; column < columnSize; column++)
        {
            swap(arr[row][column], arr[column][row]);
        }
    }
}

int main()
{
    /*2D Array*/

    // * Declare
    // int arr[4][3];

    // * Initialise
    // int arr[3][2] = {
    //     {10, 20},
    //     {30, 40},
    //     {50, 60}};
    // int arr[3][2] = {10, 20, 30, 40, 50, 60};
    // int arr[3][2] = {10, 20};

    // cout << arr[0][0] << endl;
    // cout << arr[0][1] << endl;
    // cout << arr[1][1] << endl;
    // cout << arr[2][1] << endl;

    // * Print
    // int rowSize = 3;
    // int colSize = 2;
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // *Traversal
    // int arr[3][2] = {
    //     {10, 20},
    //     {30, 40},
    //     {50, 60}};
    // int rowSize = 3;
    // int colSize = 2;

    // Row Traversal
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // Column Traversal
    // for (int col = 0; col < colSize; col++)
    // {
    //     for (int row = 0; row < rowSize; row++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // Diagonal Traversal
    // int arr[3][3] = {
    //     {10, 20, 30},
    //     {40, 50, 60},
    //     {70, 80, 90}};
    // int rowSize = 3;
    // int colSize = 3;

    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         if (row == col)
    //         {
    //             cout << arr[row][col] << " ";
    //         }
    //     }
    // }

    // Alternative Approach
    // for (int row = 0; row < rowSize; row++)
    // {
    //     cout << arr[row][row] << " ";
    // }

    // * Input
    // int arr[3][3];
    // int rowSize = 3;
    // int colSize = 3;
    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << "Enter the value at (" << row << "," << col << "): ";
    //         cin >> arr[row][col];
    //     }
    // }

    // for (int row = 0; row < rowSize; row++)
    // {
    //     for (int col = 0; col < colSize; col++)
    //     {
    //         cout << arr[row][col] << " ";
    //     }
    //     cout << endl;
    // }

    // * Search
    // int arr[3][4] = {
    //     {10, 11, 12, 13},
    //     {20, 21, 22, 23},
    //     {31, 32, 44, 55},
    // };
    // int rowSize = 3;
    // int colSize = 4;
    // int target = 44;
    // bool ans = searchIn2DArray(arr, rowSize, colSize, target);
    // cout << "Found or not: " << ans << endl;

    // * Vector in 2D
    // vector<vector<int>> arr(4, vector<int>(3, 0));
    // int rowSize = arr.size();
    // int colSize = arr[0].size();

    // Taking Input
    // for (int i = 0; i < rowSize; i++)
    // {
    //     for (int j = 0; j < colSize; j++)
    //     {
    //         cout << "Enter the value at (" << i << "," << j << "): ";
    //         cin >> arr[i][j];
    //     }
    // }

    // int target;
    // cout << "Enter target: ";
    // cin >> target;

    // bool ans = search2DVectorArray(arr, target);
    // cout << "Found or  not: " << ans << endl;

    // * Minimum Element & Maximum Element
    // int arr[3][4] = {
    //     {10, 11, 12, 13},
    //     {20, 21, 22, 23},
    //     {31, 32, 44, 102},
    // };
    // int rowSize = 3;
    // int colSize = 4;
    // int minimumElement = findMinimumElement(arr, rowSize, colSize);
    // cout << "Minimum Element: " << minimumElement << endl;
    // int maximumElement = findMaximumElement(arr, rowSize, colSize);
    // cout << "Maximum Element: " << maximumElement << endl;

    // * Row Wise Sum & Column Wise Sum
    // int arr[3][4] = {
    //     {10, 10, 10, 10},
    //     {20, 20, 20, 20},
    //     {30, 30, 30, 30}};

    // int rowSize = 3;
    // int columnSize = 4;
    // rowWiseSum(arr, rowSize, columnSize);
    // columnWiseSum(arr, rowSize, columnSize);

    // * Diagonal Sum
    // int arr[3][3] = {
    //     {10, 20, 30},
    //     {40, 50, 60},
    //     {70, 80, 90}};
    // int rowSize = 3;
    // int columnSize = 3;
    // diagonalSum(arr, rowSize, columnSize);

    // * Transpose of Matrix
    int arr[3][3] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}};

    int rowSize = 3;
    int columnSize = 3;
    transposeOfMatrix(arr, rowSize, columnSize);

    // Print after Transpose
    for (int row = 0; row < rowSize; row++)
    {
        for (int col = 0; col < columnSize; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
    return 0;
}