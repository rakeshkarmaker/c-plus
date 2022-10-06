//Question  I
#include <iostream>
using namespace std;
#include <math.h>

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float AB,BC,CA;
    cout<<"Input The values";
    cin>>x1>>x2>>x3>>y1>>y2>>y3;

    AB= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    BC= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    CA= sqrt(pow(x3-x1,2)+pow(y3-y1,2));
    
    if(AB==BC==CA)
        cout<<"It fell's under  single straight line";
    else
        cout<<"It does not fell under a single straight line";

    return 0;
}
