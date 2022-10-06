//K
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int a,b,s;
    char sign;
    cin>>a>>sign>>b;
    switch(s)
    {
    case'+':
        cout<<a+b;
            break;
    case'-':
        cout<<a-b;
            break;
    case'*':
        cout<<a*b;
            break;
    case'/':
        cout<<a/b;
            break;
    case'p':
        cout<<pow(a,2);
            break;
    case'%':
        cout<<a%b;
            break;


    }
    return 0;
}
