#include <iostream>
using namespace std;

int main()
{
    /*Nested Loop*/
    for (int i = 1; i <= 3; i++)
    {
        cout << i << "->";
        for (int j = 1; j <= 2; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /*Square Pattern*/
    int size;
    cout << "Enter size: ";
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        for (int column = 0; column < size; column++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Rectangle Pattern*/
    int length;
    int breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;
    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < breadth; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Hollow Rectangle*/
    int length;
    int breadth;
    cout << "Enter length: ";
    cin >> length;
    cout << "Enter Breadth: ";
    cin >> breadth;
    for (int row = 0; row < length; row++)
    {
        for (int col = 0; col < breadth; col++)
        {
            if (row == 0 || row == (length - 1) || col == 0 || col == (breadth - 1))
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /*Hollow Square*/
    int size;
    cout << "Enter size: ";
    cin >> size;
    for (int row = 0; row < size; row++)
    {
        for (int col = 0; col < size; col++)
        {
            if (row == 0 || row == size - 1 || col == 0 || col == size - 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /*Half Pyramid*/
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Inverted Hollow Pyramid*/
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    /*Hollow Half Pyramid*/
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            if (row == 0 || row == 1 || row == n - 1 || col == 0 || col == row)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }

    /*Hollow Inverted Half Pyramid*/
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            if (row == 0 || row == (n - 2) || row == (n - 1))
            {
                cout << "* ";
            }
            else
            {
                if (col == 0 || col == (n - row - 1))
                {
                    cout << "* ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }

    /*Numeric Half Pyramid*/
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < row + 1; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    /*Numeric Inverted Half Pyramid*/
    int n;
    cout << "Enter number of rows: ";
    cin >> n;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n - row; col++)
        {
            cout << col + 1 << " ";
        }
        cout << endl;
    }

    return 0;
}