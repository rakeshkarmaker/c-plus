#include <bits/stdc++.h>
using namespace std;

int main(){
    int t{0};

    cin>>t;

    long long int a1,a2,a3,a4,b1,b2,b3,b4;
    while(t--){
        cin>>a1>>b1>>a2>>b2>>a3>>b3>>a4>>b4;
        long long int length{0};

        if(a1 ==a2){
            length = abs(b1-b2);

        }else{

            if(a1==a3){
                length = abs(b1-b3);
                
            }else{
                if(a1==a4){
                    length = abs(b1-b4);

                }
            }
        }

        cout<<length*length<<endl;
    }
    return 0;
}