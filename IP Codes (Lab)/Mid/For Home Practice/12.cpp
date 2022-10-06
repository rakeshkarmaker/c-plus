/*
12. Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) +
(5*5) + ... + (n*n).
Sample Output:
Input the value for nth term: 5
1*1 = 1
2*2 = 4
3*3 = 9
4*4 = 16
5*5 = 25
The sum of the above series is: 55
*/
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int i, a;
    double result = 0;
    cout<<"type series steps : "<<endl;
    cin>>a;
    for(i=1;i<=a;i++){
        result = result +(i*i);
    }

    cout<<"The result is: "<<result;

    return 0;
}

