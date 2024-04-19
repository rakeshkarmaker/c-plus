// https://codeforces.com/problemset/problem/61/A
//  The i-th digit of the answer is 1 if and only if the i-th digit of the two given numbers differ. In the other case the i-th digit of the answer is 0.

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
int main(){
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    string str1,str2;
    cin>>str1>>str2;
    for (int i = 0; i < str1.length(); i++)
    {
        if(str1[i]==str2[i]){   cout<<"0";}
        if(str1[i]!=str2[i]){   cout<<"1";}
    }
    cout<<"\n";
    
    return 0;
}