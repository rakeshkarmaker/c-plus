/*
2. Write a program in C++ to find the length of a string without using library function.
Test Data:
Input the string: w3resource.com
Expected Output:
Length of the string is: 15
*/


#include <iostream>
using namespace std;
#include <string.h>
int main()
{
    char st[] ="w3resource.com";
    int b = (sizeof(st)/sizeof(st[0]))-1;
    cout<<b<<endl;

    return 0;
}


