/*
7. Write a program to print the absolute value of a number entered by the user. E.g.-
INPUT: 1
OUTPUT: 1
INPUT: -1
OUTPUT: 1
*/
#include <iostream>
using namespace std;
int main(){
int a;
cout<<"Type value of a: "<<endl;
cin>>a;
if (a>0)
{
    cout<<"The absolute value of a is: "<<a;
}
else{
    a=-a;
    cout<<"The absolute value of a is: "<<a;

}

return 0;
}