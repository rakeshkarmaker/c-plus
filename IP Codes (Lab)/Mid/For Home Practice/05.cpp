/*
5. Write a program in C++ to check whether a number is prime or not.
Sample Output:
Input a number to check prime or not: 13
The entered number is a prime number
*/
#include <iostream>  
using namespace std;  
int main()  
{  
  int i,n,flag=0;   //Flag variable is used as a signal in programming to let the program know that a certain condition has met.
                           //It usually acts as a boolean variable indicating a condition to be either true or false.  
                            // https://www.geeksforgeeks.org/use-of-flag-in-programming/
    cout<<"Inter the numbers:-"<<endl;
    cin>>n;

     // 0 and 1 are not prime numbers
  if (n != 0 || n != 1) {
    
      cout<<n<<" is not a prime number"<<endl;
  }
  else
  {
          for(i=2;i<= n/2 ;i++){
        if( n%i == 0){
            cout<<n<<" is not a prime number"<<endl;
            flag=1;
            break;
        }
            
             }
         if(flag==0){
        cout<<n<<" is a prime number"<<endl;
          }
  }
  return 0;  
}  


//alternative:(Reverse logic) https://www.w3resource.com/cpp-exercises/for-loop/cpp-for-loop-exercise-5.php
/*
#include <iostream>
using namespace std;
int main()
{
    int num1, ctr = 0;
    cout << "\n\n Check whether a number is prime or not:\n";
	cout << "--------------------------------------------\n";
	cout << " Input a number to check prime or not: ";
	cin>> num1;	
    for (int a = 1; a <= num1; a++) 
    {
        if (num1 % a == 0) 
        {
            ctr++;
        }
    }
    if (ctr == 2) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }
}
*/
