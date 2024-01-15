#include <bits/stdc++.h>
using namespace std;

int main(){

   short int n{0},a{0},b{0},c{0};

    cin>>n>>a>>b>>c;
    int answer{0};

    // as the number of ribbon is maximum 4000. A DP is possible easily

    for(int i=0;i<=4000;i++){ // here i is the number of a length ribons 
        
        for(int j=0;j<=4000;j++){ // here j is the number of b length ribons
        
            //Calculating the remaining values which is the value of total c sized ribons
            int kc = n-i*a-j*b; // I dont know why but when i declared this in above the code gave error and a garbage value but when i made it a instance variable the error was fixed

            if(kc<0)    break; // negetive length is not valid 
            else{

            // if(total length of c % c == 0) then it means that the value of k is valid and k times c is logical
            if(kc%c == 0)   answer = max(answer,i+j+kc/c); // the answer will be maximum number of ribons possible so here on each iter, we check answer vs sum of a,b,c noww many times(that is i, j, and kc/c = k)
            }
        }

    }
    cout<<answer<<endl;
    return 0;
}