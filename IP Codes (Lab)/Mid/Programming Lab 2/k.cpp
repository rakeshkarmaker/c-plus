#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int inv,year,alt;

    while(alt>inv)
    {
        year++;
        alt = year*88;
        inv = (1000*year) -4000;

    }
    cout<<"Answer : "<<year<<endl;
    return 0;
}


