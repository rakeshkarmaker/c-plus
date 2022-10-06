/*8.
Write a program that will ask the user to enter his/her marks (out of 100). Define a function that will display grades according to the marks entered as below:
Marks        Grade
91-100         AA
81-90          AB
71-80          BB
61-70          BC
51-60          CD
41-50          DD
<=40          Fail
*/
#include <iostream>
using namespace std;
#include <math.h>

int grade(int a){
    char one ='F';


    if(a>=0 && a<=40){
        cout<<"Fail";
    }
    else{    
        for (int i=41, j=50; i <= 91 && j <= 100; i+=10,j+=10){

            if(a>=i && a<=j){
                cout<<one;
            }
            else
                one--;
        }

    }


}
int main()
{
    int a;
    cout<<"Type your numbers: ";
    cin>>a;
    grade(a);

    return 0;
}

