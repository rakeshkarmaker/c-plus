#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int y;
    float x,i;
            cout<<"i"<<"\t"<<"y"<<endl<<endl;

    for(y=1;y<=6;y++)
    {
        for(x=5.5;x<=12.5;x++)
        {
            i = 2+(y+0.5*x);
        cout<<i<<"\t"<<y<<endl;

        }
    }

    return 0;
}


