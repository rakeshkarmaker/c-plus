/*
8. Write a program in C++ to copy one string to another string.
Test Data:
Input the string: This is a string to be copied.
Expected Output:
The First string is: This is a string to be copied.
The Second string is: This is a string to be copied.
*/
#include <iostream>
using namespace std;

int main()
{
    string strings1, strings2;

    cout << "Enter strings1: ";
    getline (cin, strings1);

    strings2 = strings1;

    cout << "string1 = "<<strings1<<endl;
    cout << "string2 = "<<strings2<<endl;

    return 0;
}
