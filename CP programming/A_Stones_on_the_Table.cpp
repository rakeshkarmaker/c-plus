

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string S{0};
    // ll R{0},G{0},B{0};
    ll val{0},n{0};
    cin>>n>>S;
    for (int i = 0; i < n; i++)
    {
        if(S[i]=='R' && S[i+1]=='R')    val++;            

        if(S[i]=='G' && S[i+1]=='G')    val++;
        if(S[i]=='B' && S[i+1]=='B')    val++;

        
    }
    cout<<val<<"\n";
    return 0;
}