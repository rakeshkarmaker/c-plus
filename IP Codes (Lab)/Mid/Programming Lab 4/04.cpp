/*
4. Write a program in C++ to print individual characters of string in reverse order.
Test Data:
Input the string: w3resource.co
Expected Output:
The characters of the string in reverse are:
m o c . e c r u o s e r 3 w
*/
#include <iostream>

using namespace std;

int main()
{
  char name[14]= {'w','3','r','e','s','o','u','r','c','e','.','c','o','m'};

  for (int i = 14; i >= 0; --i)
  {
       if(i!=14) {
        cout <<" ";}
        cout<<name[i]<< " ";
  }
}

