
// https://codeforces.com/contest/271/problem/A

#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define TxtIO   freopen("input.txt","r",stdin); freopen("output.txt","w",stdout);
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

int countDistinct(int arr[], int n)
{
    int res = 1;
 
    // Pick all elements one by one
    for (int i = 1; i < n; i++) {
        int j = 0;
        for (j = 0; j < i; j++)
            if (arr[i] == arr[j])
                break;
 
        // If not printed earlier, then print it
        if (i == j)
            res++;
    }
    return res;
}


int main(){
    FAST;
    int t{0},arr[4];
    cin>>t;

    while (true)
    {
        t++;
        arr[0]= t/1000;
        arr[1]= (t-(arr[0]*1000))/100;
        arr[2]= (t-(arr[0]*1000)-(arr[1]*100))/10;
        arr[3]= t-arr[0]*1000-arr[1]*100 - arr[2]*10;

        
        if(countDistinct(arr,4)==4){
        cout<<arr[0]<<arr[1]<<arr[2]<<arr[3]<<"\n";
        break;
        }


    }
    
    return 0;
}