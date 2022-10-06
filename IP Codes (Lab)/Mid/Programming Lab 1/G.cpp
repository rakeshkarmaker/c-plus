//G
#include <iostream>

using namespace std;

int main()
{
    int a;
    cin>>a;
    if(a<0)
    {
        a=-a;
        cout << "Absolute Value is: "<<a<<endl;
    }
    else
        cout << "Absolute Value is: "<<a<<endl;

//(a<0)? cout << "Absolute Value is: "<<-a<<endl: cout <<"Absolute Value is: "<<a<<endl;
    return 0;
}

