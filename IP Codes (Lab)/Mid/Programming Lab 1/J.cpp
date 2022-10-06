//Question  I
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,x3,y1,y2,y3;
    float AB,BC,CA,ABC;
    cout<<"Input The values(x1,x2,x3,y1,y2,y3)";
    cin>>x1>>x2>>x3>>y1>>y2>>y3;

    AB= sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    BC= sqrt(pow(x3-x2,2)+pow(y3-y2,2));
    CA = sqrt(pow(x3-x1,2)+pow(y3-y1,2));

    ABC=AB+BC;

    if(ABC==CA)
        cout<<"It fell's under  single straight line";
    else
        cout<<"It does not fell under a single straight line";

    return 0;
}
