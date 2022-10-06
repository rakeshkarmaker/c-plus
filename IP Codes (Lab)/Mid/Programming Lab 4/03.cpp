/*
3. Write a program in C++ to separate the individual characters from a string.
Test Data:
Input the string: w3resource.com
Expected Output:
The characters of the string are:
w 3 r e s o u r c e . c o m
*/
#include <iostream>

using namespace std;

int main()
{
  char name[14]= {'w','3','r','e','s','o','u','r','c','e','.','c','o','m'};

  for (int i = 0; i <14; ++i)
  {
        cout<<name[i]<< " ";
  }
}
