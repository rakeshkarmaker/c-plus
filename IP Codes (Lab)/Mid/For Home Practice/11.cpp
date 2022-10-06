/*
11. Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.
Sample Output:
Input the value for nth term: 5
1/1^1 = 1
1/2^2 = 0.25
1/3^3 = 0.037037
1/4^4 = 0.00390625
1/5^5 = 0.00032
The sum of the above series is: 1.29126
*/
#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    int i, a;
    double result = 0,b;
    cout<<"type series steps : "<<endl;
    cin>>a;
    for(i=0;i<=a;i++){

        b= pow(a,a);
        result = result +(1/b);
    }

    cout<<"The result is: "<<result;

    return 0;
}

