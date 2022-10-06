//F
#include <iostream>

using namespace std;

int main()
{
    int a,b,c,result;
    cout << "Type Angle" << endl;
    cin>>a>>b>>c;
    result=a+b+c;
    if(result==180)
        cout<<"This is a triangle"<< endl;
    else
        cout<<"This is not triangle"<< endl;

//(result<180)? cout<<"This is a triangle"<< endl : cout<<"This is not triangle"<< endl;
    return 0;
}
