//c
#include <iostream>
using namespace std;
int main()
{
    int year,R4,R100,R400;
    cout<<"Enter Year:\n";
    cin>>year;
    R4 = year%4;
    R100=year%100;
    R400=year%400;
    if ( (R4=0 && R100!=0)||R400==0)
        cout<<"Leap Year."<<endl;
    else
        cout<<"Not a leap Year."<<endl;

//((R4==0 && R100!=0)||R400==0) ? cout<<year<<"Leap year":cout<<year<<"Not a leap year";
    return 0;

}
