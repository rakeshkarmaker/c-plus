#include <iostream>
using namespace std;

int main() {

  int i, arr[500],count,j,p;

  cout << "Enter array numbers: ";
  cin >> count;
    for(i=0;i<count;i++){
        cin>>arr[i];
    }
    cout<<"All prime Numbers:"<<endl;
    for(i=0;i<count;i++){
        j = 2;
        p = 1;
        while (j < arr[i]) {
            if (arr[i] % j == 0) {
                p = 0;
                break;
            }
            j++;
        }
        if (p == 1) {
            cout << arr[i] << " ";
        }
    }
  return 0;
}

/*Explanation:
Approach used in the below program is as follows
We take an integer array arr[] containing random numbers.

Function checkPrime(int num) checks if the passed number num is prime or not. If it is prime, it returns 1 else it returns 0.

If the num is <=1 then it is non prime, return 0.

Now starting from 2 to num/2 if any number fully divides num ( num%i==0) then num is non-prime, return 0.

Else return 1.

Variable isprime tells if number is prime or not ( 1 means prime )

Variable count stores the number of primes in arr[]

Inside the main traverse whole array and pass each element arr[i] to checkPrime( arr[i] ), if it results 1 ( isprime==1 ) then increment count.

At the end count is the number of primes in arr[]

*/
