/*
5. Write a program in C++ to count the total number of words in a string.
Test Data:
Input the string: This is w3resource.com
Expected Output:
Total number of words in the string is: 3
*/
#include <iostream>
#include <string.h>
using namespace std;



#include<iostream>

using namespace std;

int main()
{
    char a[]="This is w3resource.com Raj";
    int i,count=1;
    for(i=0; a[i]!='\0'; ++i)
    {
        if(a[i]==' ')
            count++;
    }
    cout<<"\nThere are "<<count<<" words in the given string";

    return 0;
}



/*
int main()
{
char arr [] = "This is a book";
int cnt = 1;

 for (int i=0; i < strlen(arr);i++)
{
if (arr[i]==' ')
{
cnt++;
}
}

 cout<<cnt;

return 0;
}
*/
