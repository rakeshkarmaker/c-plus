/*
8. A student will not be allowed to sit in an exam if his/her attendance is less than 75%.
Take the following input from the user Number of classes held. A number of classes
attended. And the print percentage of class attended Is student is allowed to sit in exam
or not.
*/
#include <iostream>
using namespace std;
int main(){
int class_held,class_atteneded;
float calc;

cout<<"Input from the  Number of classes held  & number of classes attended."<<endl;
cin>>class_held>>class_atteneded;
calc = ((float)class_atteneded/class_held)*100;

if(calc>75 && calc<=100){
    cout<<"As his attendance is "<<calc<<"%, ths student will  be allowed to sit in an exam."<<endl;
}
else if(calc>=0 && calc<=75){
        cout<<"As his attendance is "<<calc<<"%, Ths student will not be allowed to sit in an exam."<<endl;

}
else{
        cout<<"As his attendance is "<<calc<<"%, is invalid/ not possible."<<endl;

}
return 0;
}