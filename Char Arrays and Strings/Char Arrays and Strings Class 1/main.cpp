#include <iostream>
#include <cstring>
using namespace std;

int getLength(char arr[])
{
    int length = 0;
    int i = 0;
    while (arr[i] != '\0')
    {
        length++;
        i++;
    }
    return length;
}

void replaceCharacter(char arr[], char oldChar, char newChar)
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == oldChar)
        {
            arr[i] = newChar;
        }
    }
}

void convertIntoUppercase(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 'A' && arr[i] < 'Z')
        {
            continue;
        }
        else
        {
            char ch = arr[i];
            ch = ch - 'a' + 'A';
            arr[i] = ch;
        }
    }
}

void convertIntoLowerCase(char arr[])
{
    int n = getLength(arr);
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 'a' && arr[i] < 'z')
        {
            continue;
        }
        else
        {
            char ch = arr[i];
            ch = ch - 'A' + 'a';
            arr[i] = ch;
        }
    }
}

void reverseCharArray(char arr[])
{
    int n = getLength(arr);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

bool checkPalindrome(char arr[])
{
    int n = getLength(arr);
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (arr[i] != arr[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main()
{
    // *Char Array
    char arr[100];

    /*Input & Output*/
    cout << "Enter your name: ";
    cin >> arr;
    cout << "You name is: " << arr << endl;

    cout << arr[0] << "->" << (int)arr[0] << endl;
    cout << arr[1] << "->" << (int)arr[1] << endl;
    cout << arr[2] << "->" << (int)arr[2] << endl;
    cout << arr[3] << "->" << (int)arr[3] << endl;
    cout << arr[4] << "->" << (int)arr[4] << endl;
    cout << arr[5] << "->" << (int)arr[5] << endl; // Null Character - ASCII value: 0

    /*cin.getline()*/
    char arr[100];
    cout << "Enter your name: ";
    cin.getline(arr,50);
    cout << "You name is: " << arr << endl;

    char arr[100];
    cout << "Enter Sentence: ";
    cin.getline(arr, 100, '\t'); // Delimeter
    cout << arr << endl;

    /*Length of char array*/
    char arr[100];
    cout << "Enter input: ";
    cin >> arr;
    cout << "Length of char Array: " << getLength(arr) << endl;

    /*Replace Character*/
    char arr[] = "My@Name@Is@Rahul@Kumar";
    char oldChar = '@';
    char newChar = ' ';
    replaceCharacter(arr, oldChar, newChar);
    cout << arr << endl;

    /*LowerCase and UpperCase Conversion*/
    char arr[] = "HelloWorld";
    convertIntoLowerCase(arr);
    cout << arr << endl;
    convertIntoUppercase(arr);
    cout << arr << endl;

    /*Reverse Char Array*/
    char arr[] = "Hello";
    cout << "Before: " << arr << endl;
    reverseCharArray(arr);
    cout << "After: " << arr << endl;

    /*Palindrome*/
    char arr[] = "mam";
    bool ans= checkPalindrome(arr);
    cout << "Palindrome or not: " << ans << endl;

    /*Function*/
    char arr1[100];
    char arr2[100];
    cout << "Enter input: ";
    cin >> arr1;
    cout << "Enter input: ";
    cin >> arr2;
    cout << strcat(arr1, arr2) << endl; // #include <cstring>

    // *String
    string str;
    cout << "Enter the input: ";
    cin >> str;
    cout << "String: " << str << endl;

    /*push_back() & pop_back()*/
    str.push_back('R');
    str.push_back('A');
    str.push_back('H');
    str.push_back('U');
    str.push_back('L');
    cout << "String: " << str << endl;
    str.pop_back();
    cout << "String: " << str << endl;

    /*getline()*/
    string sentence;
    cout << "Enter input: ";
    getline(cin, sentence, '\t');
    cout << sentence << endl;

    /*Functions*/
    string name = "Maharana Pratap";
    cout << name[0] << endl;
    cout << name.at(0) << endl;
    cout << name.front() << endl;
    cout << name.back() << endl;
    cout << name.size() << endl;
    cout << name.length() << endl;

    auto it = name.begin();
    while (it != name.end())
    {
        cout << *it << " ";
        it++;
    }
    cout << endl;

    name.clear();

    if (name.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String isn't empty" << endl;
    }

    string firstName = "Rahul";
    string lastName = "Kumar";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl;

    string str = "Hello World How are you";
    cout << str.substr(0, 5) << endl;
    cout << str.substr(6) << endl;
    cout << str.substr(0) << endl;
    string word ="World";
    cout << str.find(word) << endl; // If found, returns index else returns npos.

    string s1 = "Rahul";
    string s2 = "Rahul";
    cout << s1.compare(s2) << endl; // If equal, returns 0 else returns -1.
    return 0;
}