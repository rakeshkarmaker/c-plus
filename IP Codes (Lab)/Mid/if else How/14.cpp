/*
14. Write a c++program to check whether a given number is positive or negative.
Test Data: 15
Expected Output:
15 is a positive number
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Input a number" << endl;
    cin >> number;
    if (number >= 0)
    {
        cout << number << " is a positive number." << endl;
    }
    else if (number < 0)
    {
        cout << number << " is a negetive number." << endl;
    }
    else
    {
        cout <<"It is a not number." << endl;
    }
    return 0;
}