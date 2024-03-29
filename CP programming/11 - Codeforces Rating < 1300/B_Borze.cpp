//https://codeforces.com/contest/32/problem/B

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str;
    cin>>str;
    //cout<<sizeof(str);
    for (int i = 0; i < str.length(); i++)
    {
        if(str[i]== '.'){
            cout<<"0";
            continue;

        }

        if(str[i]=='-'){


        if(str[i+1]=='.'){
            cout<<"1";
            i++;
            continue;

        }
        if(str[i+1]=='-'){
            cout<<"2";
            i++;
            continue;

        }
        
        }
    }
    cout<<"\n";
    
    return 0;
}

// --|-.|-.|-.|--|--|--|.|.|-.|.|-.|.|-.|.|-.|-.|.|-.|--|.|-.|-.|.|-.|-.|--|--|-.|.|-.|-.|