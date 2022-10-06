/*
9. Modify the above question to allow the student to sit if he/she has a medical cause. Ask
the user if he/she has a medical cause or not ( 'Y' or 'N' ) and print accordingly.
*/
#include <iostream>
using namespace std;
int main(){
char a;
cout<<"Input if you(He/She) have a medical cause or not ( 'Y' or 'N' ) :"<<endl;
cin>>a;

if(a=='Y'){
    cout<<"You are not allowed to sit for a exam!."<<endl;
}

else if(a=='N'){
    cout<<"You are allowed to sit for a exam!."<<endl;
}
else{
    cout<<"You typed invalid input."<<endl;

}
return 0;
}