//H
#include <iostream>
#include<math.h>
using namespace std;

int main()
{
    int L,B,perimeter,area; //lenth,breadth,
    cout<<"Type L,B: ";
    cin>>L>>B;
    perimeter=2*(L+B);
    area=L*B;
    if(perimeter>area)
       {
        cout<<"Perimeter of rectangle is greater"<<endl;
       }
    else
        cout<<"Perimeter of rectangle not is greater"<<endl;
//(perimeter>area)? cout << "Perimeter of rectangle is greater": cout<<"Perimeter of rectangle is greater"<<endl;
    return 0;
}
