#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
 
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t{0};
    cin>>t;
 
    int n{0};
    string str[] = {"##",".."};
 
     while(t--){
        cin>>n;
        bool check = false;
        int isEven{0};
 
        if(n==1)    cout<<str[0]<<"\n"<<str[0]<<"\n";
        else{
 
        for(int i=0;i<2*n;i++){
            for (int j = 0; j < n; j++)
            {
                cout<<str[check];
                check = !check;
               
            }
            isEven++;
            if(isEven==2 && n%2==0){
                check = !check;
                isEven=0;
            }
 
             if(n%2!=0){
 
                if(isEven ==2){
                isEven=0;
                }else   check = !check;
 
            }
 
           
            cout<<"\n";
           
        }
     }
     }
 
return 0;
}