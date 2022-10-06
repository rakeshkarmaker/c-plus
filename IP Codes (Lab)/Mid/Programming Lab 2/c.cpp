#include <iostream>
using namespace std;

#include <iomanip>
int main()
{
    int i;
    float fact=1.0, res, nres=0;


    for (i=1; i<8; i++)
    {

        fact = fact * i;

        res = i/fact;
        nres = nres + res;
        cout<< fixed<< setprecision(5)<<nres<<endl;
    }

    return 0;
}

