/*7.
Define a function to find out if the number is prime or not.
*/
#include <iostream>
#include <limits>
using namespace std;
#include <math.h>
int prime (int a){
    int result,flag=0;

    if (cin.good()){
    for(int i=2;i<a;i++){
        if(a%i==0)
            flag++;
        else
            continue;
    }
    if(flag==0)
        return 0;
    else
        return 1;
    }
    else{
        return 2;
    }
}
int main()
{
    int a,solve;
    cout<<"Type a value to check if its prime or not: "<<endl;
    cin>>a;
    if (prime (a)==0){
         cout<<"Its a prime number.";
    }
    else if (prime (a)==1){
         cout<<"It's not a prime number.";
    }
    else{
         cout<<"It's a Invalid input.";
    }
    
    return 0;
}

