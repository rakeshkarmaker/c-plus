#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    for(int i=2; i<=300; ++i)

    {
        int vari=0;
        for(int val=2; val<=sqrt(i); ++val)
        {
            if(i%val==0)

                vari=1;
        }

        if(vari==0)

            cout<<i<<endl;

    }

    return 0;

}

