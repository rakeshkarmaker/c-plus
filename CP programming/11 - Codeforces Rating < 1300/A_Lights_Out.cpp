
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST;
    ll arr[3][3]= {{0,0,0},{0,0,0},{0,0,0}};
    ll val{0};
    
    for (int i = 0; i < 3; i++){ 
        for (int j = 0; j < 3; j++){
            cin>>val;
            if(val%2 != 0){
                arr[i][j]++;

                if(i>0)     arr[i-1][j]++;
                if(j>0)     arr[i][j-1]++;
                if(i<2)     arr[i+1][j]++;
                if(j<2)     arr[i][j+1]++;
                
            }
        }
    }
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if(arr[i][j]%2==0)  cout<<1;
            if(arr[i][j]%2!=0) cout<<0;
            //cout<<arr[i][j];

        }
        cout<<"\n";
    }

    return 0;
}