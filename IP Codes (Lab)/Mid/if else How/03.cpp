#include <iostream>
using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a>1000)
        cout<<"the discount cost is : "<<(100*0.9*a)<<endl;
    else
        cout<< fixed<<"the cost is : "<<100*a<<endl;


return 0;
}

