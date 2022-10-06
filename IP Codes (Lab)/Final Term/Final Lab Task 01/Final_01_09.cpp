/*9.
Write a program to print the factorial of a number by defining a function named 'Factorial'.
Factorial of any number n is represented by n! and is equal to 1*2*3*....*(n-1)*n. E.g.-
4! = 1*2*3*4 = 24
3! = 3*2*1 = 6
2! = 2*1 = 2
Also,
1! = 1
0! = 0
*/
#include <iostream>
using namespace std;
int factorial(int a){
    int b,result=1;
    if(a != 0){
    for(int i=1;i<=a;i++){
        result = result*i;
    }
    return result;
    }
    else{
        return 0;
    }

}
int main()
{
    int a;
    cout<<"Type the number to determine factorial:";
    cin>>a;
    cout<<"The factorial of "<<a<<" is :"<<factorial(a);

    return 0;
}

