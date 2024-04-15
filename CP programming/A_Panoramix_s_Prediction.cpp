//Contains isPrime Function

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);

bool isPrime(int number){
    int vari=0;
        for(int val=2; val<=sqrt(number); ++val){
            if(number%val==0)

                vari=1;
        }

        if(vari==0)     return true;
        
        
        
        return false;
}
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
          
    int m{0},n{0},temp{0};
    cin>>n>>m;
    temp=n;
    
    while (true){
        temp++;
        if(isPrime(temp)){
            break;
        }
        
    }
    if(temp==m) cout<<"YES\n";
    else    cout<<"NO\n";
    
    return 0;
}