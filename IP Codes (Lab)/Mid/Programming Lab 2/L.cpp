// I number
#include <iostream>
using namespace std;
#include <math.h>
int main()
{
    float p,n,r,q,ans;    
    for(int i=1;i<=10;i++){
    cout<<"Type p,r,n,q:"<<endl;
    cin>>p>>r>>n>>q;
    ans = p*(pow((1+r/q),n*q));
    cout<<"Answer : "<<ans<<endl;
    }

    return 0;
}
