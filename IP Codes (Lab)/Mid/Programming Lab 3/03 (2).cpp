/*
C++program to swap the first element with last, second to second last, and so on
(reversing elements)
In this C++program, we are going to swap array elements (like the first element with
last, a second element with second last, and so on... i.e. reversing the array elements).
*/
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int input[500],output[500],count,i;
    
    cout << "Enter number of elements in array\n";
    cin >> count;
 
    cout << "Enter " << count << " numbers \n";
    for(i=0;i<count;i++){
        cin>>input[i];
    }
    cout<<" is the input data"<<endl;

   for(i=0;i<count;i++){
       output[i]= input[count-i-1];
       cout<<output[i]<<" ";
   }

    return 0;
}

