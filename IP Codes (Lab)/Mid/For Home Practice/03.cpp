/*
3. Write a program in C++ to display n terms of natural number and their sum.
Sample Output:
Input a number of terms: 7
The natural numbers upto 7th term are:
1 2 3 4 5 6 7
The sum of the natural numbers is: 28
*/
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    
        int i,n,b=0;
        cin>>n;
    for(i=1;i<=n;i++) {

        b=b+i;

    }
        cout<<b;
    return 0;
}

