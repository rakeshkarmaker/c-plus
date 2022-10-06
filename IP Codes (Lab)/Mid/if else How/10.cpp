/*
10.
If
x = 2
y = 5
z = 0
then find values of the following expressions:
a. x == 2
b. x != 5
c. x != 5 && y >= 5
d. z != 0 || x == 2
e. !(y < 10)
*/
#include <iostream>
using namespace std;
int main(){
int x=2,y=5,z=0;
cout<<"a. "<<(x == 2)<<endl;
cout<<"b. "<<(x != 5)<<endl;
cout<<"c. "<<((x != 5) && (y >= 5))<<endl;
cout<<"d. "<<((z != 0) || (x == 2))<<endl;
cout<<"e. "<<!(y < 10)<<endl;
return 0;
}
// a. x == 2 - Since x is 2, x==2 will be true (1).

// b. x != 5 - x is 2 and it is not equal to 5 so it is also true (1).

// c. x != 5 && y >= 5 - x!=5 is true. y is 5. So, y>=5 is also true. So, true and true is true (1).

// d. z !=0 || x == 2 - z!=0 is false as z is 0 (z is equal to 0). x == -2 is also false. false || false is false (0).