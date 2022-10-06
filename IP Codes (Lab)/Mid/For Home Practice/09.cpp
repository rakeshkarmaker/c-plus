#include <iostream>
using namespace std;
int main()
{
    int number1,number2,result;
    cout<<"input numbers:"<<endl;
    cin>>number1>>number2;
    for(int i=1;i<=number1 && i<=number2;i++) {

        if(number1 % i ==0 && number2 % i ==0) 
        {
            result=i;
        }
    }
    cout<<"The Greatest Common divisor of "<<number1<<" and "<<number2<<" is: "<<result<<endl;
    return 0;
}
