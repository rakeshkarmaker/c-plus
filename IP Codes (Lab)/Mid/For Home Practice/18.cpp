/*
Write a program in C++ to calculate the series (1^3) + (2^3) + (3^3) + (4^3) + ... +
(n^3).
*/
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int a,ans=0;
    cout<<"Input the number of terms: "<<endl;
    cin>>a;
    for(int i=1;i<a;i++){

        int b =(i*i*i);
        ans = ans + b;
    }
    cout<<"The answer us"<<ans<<endl;

    return 0;
}

