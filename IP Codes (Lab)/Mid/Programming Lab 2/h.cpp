#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    int num,i,ans;
    cout<<"Type the table of desire"<<endl;
    cin>>num;
    for(i=1;i<=10;i++)
    {
        ans = i*num;
        cout<<num<<"*"<<i<<" = "<<ans<<endl;
    }
    return 0;
}

