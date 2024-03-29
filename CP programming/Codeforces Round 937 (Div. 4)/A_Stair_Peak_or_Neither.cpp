

#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin>>t;

    int c{0},a{0},b{0};

     while(t--){
        cin>>a>>b>>c;

        if(a<b){
            if(b<c){
                cout<<"STAIR\n";
            
            }else if(b>c){
                cout<<"PEAK\n";

            }else cout<<"NONE\n";

        }else   cout<<"NONE\n";
        

     }

return 0;
}