/*
12. Write a C++ program to accept two integers and check whether they are equal or not.
Test Data: 15 15
Expected Output:
Number1 and Number2 are equal
*/
#include <iostream>
using namespace std;
int main(){
int Number1,Number2;
cout<<"Enter the values of two integers :"<<endl;
cin>>Number1>>Number2;
if(Number1==Number2){
    cout<<"Number1 and Number2 are equal"<<endl;
}
else{
    cout<<"Number1 and Number2 are not equal"<<endl;
}
return 0;
}