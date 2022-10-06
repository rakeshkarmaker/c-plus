/*
13. Write a C++ program to check whether a given number is even or odd.
Test Data: 15
Expected Output:
15 is an odd integer
*/
#include <iostream>
using namespace std;
int main()
{
    int number;
    cout << "Input a number" << endl;
    cin >> number;
    if (number % 2 == 0)
    {
        cout << number << " is a even number" << endl;
    }
    else
    {
        cout << number << " is a odd number." << endl;
    }
    return 0;
}