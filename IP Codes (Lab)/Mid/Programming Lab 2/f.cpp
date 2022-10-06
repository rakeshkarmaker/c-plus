#include <iostream>

using namespace std;

int main()
{
    int i,j,k,l,m;
    for(i=0;i<=6;i++)
    {
        for(k=65;k<=71-i;k++)
        cout<<(char)k;

        for(j=1;j<=i*2-1;j++)
            cout<<" ";

        for(l=71-i;l>=65;l--)
            if(l!=71)
                cout<<(char)l;

        cout<<endl;
    }

    return 0;
}
