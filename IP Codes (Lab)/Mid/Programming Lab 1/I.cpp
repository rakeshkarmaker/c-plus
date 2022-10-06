//Question J
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int x1,x2,y1,y2,radius;
    float c;
    cout<<"Enter the center:"
    cin>>x1,y1,x2,y2;
    cout<<"Enter the radius:"
    cin>>radius;
    c = sqrt(pow(x2-x1, 2)+pow(y2-y1,2));

    if(c>radius)
        cout<<"Its is outside the cicrle";
    else if(c<radius)
        cout<<"Its is inside the cicrle";
    else if(c==radius)
        cout<<"Its is on the cicrle";
    else
        cout<<"Error Invalid";

    return 0;
}
