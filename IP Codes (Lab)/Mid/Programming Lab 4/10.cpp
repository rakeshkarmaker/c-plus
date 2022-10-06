/*
10. Write a program in C++ to find maximum occurring character in a string.
Test Data:
Input the string: Welcome to w3resource.com.
Expected Output:
The Highest frequency of character 'e'
appears number of times: 4
*/

#include <iostream>
#include <string.h>
using namespace std;

int main()
{
char arr [] = "this is a book";
int cnt = 0;

for (int j = 97; j<123; j++){

 for (int i=0; i < strlen(arr);i++)
{
if (arr[i]==j)
{
cnt++;
}
}
cout<<(char)j<<" "<<cnt<<endl;
cnt=0;
}

 return 0;
}
