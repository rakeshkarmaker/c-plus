//https://codeforces.com/contest/1955


#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    ll t{0};
    cin>>t;
          
    ll n{0},a{0},b{0};

    while(t--){
        cin>>n>>a>>b;
        if(a<(b/2+1)){
            cout<<n*a<<endl;
        }else{
            if(n%2==0){
                cout<<(n/2)*b<<endl;

            }else{

                cout<<(n/2)*b+a<<endl;
            }
        }
    }
    return 0;
}