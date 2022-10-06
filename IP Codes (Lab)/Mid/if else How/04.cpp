/*
4. A company decided to give a bonus of 5% to the employee if his/her year of service is
more than 5 years. Ask users for their salary and year of service and print the net bonus
amount.
*/
#include <iostream>
using namespace std;

int main() {
    jump:
  int salary=0,year=0;
  float bonus,sum;
  cout<<"Input your yearly salary and year of service:";
  cin>>salary>>year;
  if(year>5){
      bonus = salary*year*0.05;
      cout<<"Your eligible bonus amount is : "<<bonus<<endl;
      goto jump;
  }
  else if(year>=0){
        cout<<"Your not eligible for bonus"<<endl;
    goto jump;

  }
    else{
        cout<<"You entered invalid year. Please Try again!"<<endl;
        goto jump;
    }
    return 0;
}
