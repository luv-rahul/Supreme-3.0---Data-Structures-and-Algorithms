#include <iostream>
using namespace std;

int main()
{
    /*Operators*/
    int a = 10;
    int b = 5;

    // Arithmetic Operators
    cout << (a + b) << endl;
    cout << (a - b) << endl;
    cout << (a * b) << endl;
    cout << (a / b) << endl;
    cout << (a % b) << endl;

    // Relational Operators
    cout << (a > b) << endl;
    cout << (a < b) << endl;
    cout << (a >= b) << endl;
    cout << (a <= b) << endl;
    cout << (a == b) << endl;
    cout << (a != b) << endl;

    // Assignment Operators
    a += 10;
    a -= 10;
    a *= 10;
    a /= 10;
    a %= 10;
    cout << a << endl;

    // Logical Operators
    bool cond1 = (10 > 5);
    bool cond2 = (20 > 14);
    bool cond3 = (30 > 25);
    cout << (cond1 && cond2 && cond3) << endl;
    cout << (cond1 && false && cond3) << endl;
    cout << (cond1 || false || cond3) << endl;
    cout << (!true) << endl;
    cout << (!false) << endl;

    // Unary Operators
    // int a = 10;
    // int b = 5;
    // cout << (++a) * (--b) << endl;
    // cout << (++a) * (b--) << endl;
    // cout << (a++) * (--b) << endl;
    // cout << (a++) * (b--) << endl;

    /*Conditional Statement*/
    // If
    int age = 20;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }

    // If-else
    // int money = 10;
    // if (money >= 12)
    // {
    //     cout << "maggi dedo!" << endl;
    // }
    // else
    // {
    //     cout << "chalo ghar chale!" << endl;
    // }

    int age = 18;
    if (age > 18)
    {
        cout << "You can vote!" << endl;
    }
    else
    {
        cout << "You can't vote!" << endl;
    }

    // If-elseif
    // int package = 54;
    // if (package >= 50)
    // {
    //     cout << "Beast" << endl;
    // }
    // else if (package >= 30)
    // {
    //     cout << "Chota Beast" << endl;
    // }
    // else if (package >= 10)
    // {
    //     cout << "Bhot chota beast!" << endl;
    // }
    // else
    // {
    //     cout << "Tum chordo!" << endl;
    // }

    int age = 2;
    if (age >= 18)
    {
        cout << "You can vote!" << endl;
    }
    else if (age >= 15)
    {
        cout << "Tum chote ho!" << endl;
    }
    else if (age >= 10)
    {
        cout << "Abhi bhi chote ho!" << endl;
    }
    else if (age >= 5)
    {
        cout << "Paida to hoja bhai!" << endl;
    }
    else
    {
        cout << "Inside else case" << endl;
    }

    // Nested if
    int age = 21;
    bool manHaiTumhara = true;
    if (age >= 18)
    {
        cout << "Bhai tu to bada hogaya!" << endl;
        if (manHaiTumhara)
        {
            cout << "Kar do vote!" << endl;
        }
        else
        {
            cout << "Mat kar bhai vote!" << endl;
        }
    }
    else
    {
        cout << "Tu rehnde de yaar!" << endl;
    }

    /* Ternary Operator*/
    int money = 10;
    (money > 5) ? cout << "Bhot ameer ho!" : cout << "Chalo coding seekhte hai!" << endl;

    /*Switch*/
    char grade;
    cout << "Enter your grade: ";
    cin >> grade;
    switch (grade)
    {
    case 'A':
        cout << "You've got >90% marks." << endl;
        break;
    case 'B':
        cout << "You've got >80% marks." << endl;
        break;
    case 'C':
        cout << "You've got >70% marks." << endl;
        break;
    default:
        cout << "Bhai tu to fail hogaya!" << endl;
    }

    /*Loop*/
    for (int i = 1; i <= 10; i++)
    {
        cout << i << " ";
    }

    for (int i = 1; i <= 10; i++)
    {
        cout << 3 * i << " ";
    }

    int i = 1;
    for (;;)
    {
        if (i > 10)
        {
            break;
        }
        cout << "Rahul" << endl;
        i = i + 1;
    }
    return 0;
}