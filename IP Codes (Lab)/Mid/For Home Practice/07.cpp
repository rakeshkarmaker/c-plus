/*
7. Write a program in C++ to find the factorial of a number.
Sample output:
Input a number to find the factorial: 5
The factorial of the given number is: 120
*/
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int n,i,ans=1;
    cout<<"type the values: \n";
    cin>>n;
    for(i=n;i>=1;i--){
        ans =ans*i;
    }
    cout<<ans;
}

