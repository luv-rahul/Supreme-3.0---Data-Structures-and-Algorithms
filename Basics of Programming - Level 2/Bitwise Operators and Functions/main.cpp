#include <iostream>
using namespace std;

void sayMyName()
{
    cout << "Hello Rahul!" << endl;
}

void printTable(int n)
{
    for (int i = 1; i <= 10; i++)
    {
        cout << n * i << " ";
    }
    cout << endl;
}

int calculatePower(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
    return ans;
}

float sumOfAP(int a, int l, int n)
{
    float sum = ((n) * (a + l)) / 2.0;
    return sum;
}

bool checkPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }

    if (n == 2)
    {
        return true;
    }

    for (int i = 2; i < n; i++)
    {
        if ((n % i) == 0)
        {
            return false;
        }
    }
    return true;
}

void printEven(int start, int end)
{
    cout << "Printing Even Numbers..." << endl;
    for (int i = start; i < end; i++)
    {
        if (!(i & 1))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void printOdd(int start, int end)
{
    cout << "Printing Odd Numbers..." << endl;
    for (int i = start; i < end; i = i + 2)
    {
        if ((i & 1))
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

float calculatePercentage(int a, int b, int c, int d, int e)
{
    float totalMarks = 500;
    float percentage = ((a + b + c + d + e) * 100.0) / totalMarks;
    return percentage;
}

int main()
{
    /*Bitwise Operators*/
    // cout << (5 & 3) << endl;
    // cout << (5 | 3) << endl;
    // cout << (~5) << endl;
    // cout << (5 ^ 5 ^ 9) << endl;
    // cout << (25 << 1) << endl;
    // cout << (25 << 2) << endl;
    // cout << (-10 << 1) << endl;
    // cout << (-1000 << 1) << endl;
    // cout << (-1000 >> 1) << endl;
    // cout << (-10 >> 1) << endl;

    /*Check Even or Odd*/
    // int n;
    // cout << "Enter number: ";
    // cin >> n;
    // if ((n & 1) == 0)
    // {
    //     cout << "Even Number" << endl;
    // }
    // else
    // {
    //     cout << "Odd Number" << endl;
    // }

    /*Count Set Bits*/
    // int n;
    // cout << "Enter Number: ";
    // cin >> n;
    // int count = 0;
    // while (n != 0)
    // {
    //     if ((n & 1) == 1)
    //     {
    //         count++;
    //     }
    //     n = n >> 1;
    // }
    // cout << "Number of set-bits: " << count << endl;

    /*Function*/
    // sayMyName();

    // Print Table
    // printTable(15);

    // a^b
    // int result = calculatePower(2, 10);
    // cout << "Result: " << result << endl;

    // Sum of AP.
    // 2,4,6,8,10
    // float sum = sumOfAP(2, 10, 5);
    // cout << "Sum of AP: " << sum << endl;

    // CheckPrime
    // bool ans = checkPrime(11);
    // cout << "Prime or not: " << ans << endl;

    // Even or Odd numbers between range
    // printEven(101, 123);
    // printOdd(101, 123);

    // Percentage
    // cout << "Total percentage: " << calculatePercentage(95, 95, 95, 99, 88) << endl;

    int age = 15;
    cout << age << endl;

    int &demo = age;
    age++;
    cout << demo << endl;
    return 0;
}