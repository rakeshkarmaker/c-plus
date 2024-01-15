#include <bits/stdc++.h>
using namespace std;

int main(){

    int m{0},n{0},a{0},b{0},mTimes{0},bCost{0},aCost{0};

    cin>>n>>m>>a>>b;


    mTimes =  floor(n/m);

    if(n*a <mTimes*b) aCost = n*a;
    else{
    bCost =mTimes*b;
    if(mTimes != 0)n %=m;

    if(n*a <b)  aCost=a*n;
    else        aCost =b;
    }
    cout<<aCost+bCost<<endl;

    return 0;
}