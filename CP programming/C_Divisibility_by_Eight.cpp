//https://unacademy.com/content/bank-exam/study-material/quantitative-aptitude/divisibility-by-8/#:~:text=According%20to%20the%20divisibility%20by,check%20the%20last%20three%20numbers.
// https://codeforces.com/contest/550/problem/C

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define FAST    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int main(){
    FAST;
    string number;
    cin>>number;

    for (int i = 0; i < number.length(); i++)
    {
        if((number[i]-'0')%8==0){
            cout<<"YES\n"<<number[i]<<"\n";
            return 0;
        }
    }

    if(number.length()>1){
    for (int i = 0; i < number.length(); i++)
    {
        for (int j = i; j < number.length(); j++)
        {
            if(i==j) continue;
            if(((number[i]-'0')*10+(number[j]-'0'))%8==0){
            cout<<"YES\n"<<(number[i]-'0')*10+(number[j]-'0')<<"\n";
            return 0;

            }

        }
        
        
    }
    }
    
    if(number.length()>2){

    for (int i = 0; i < number.length(); i++)
    {
        for (int j = i; j < number.length(); j++)
        {

            for (int k = j; k < number.length(); k++)
            {
                if(i==j||j==k||i==k) continue;

                if (((number[i] - '0') * 100 + (number[j] - '0')*10+(number[k] - '0')) % 8 == 0)
                {
                    cout << "YES\n"<< ((number[i] - '0') * 100 + (number[j] - '0')*10+(number[k] - '0')) << "\n";
                    return 0;

                }
            }
        }
    }
    }
    cout<<"NO\n";


    return 0;
}