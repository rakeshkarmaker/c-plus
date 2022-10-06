/*

*/
#include <iostream>
using namespace std;
int report(int K){
    int result=0;
    result = result+K;
    return result;

}
int main()
{
    int d;
    string a,b="result",c="donate";
    while(1){
    cout<<"Enter operation : ";
    cin>>a;
    
    if((a.compare(c)==0)){
    cout<<"Enter Donation : ";
    
    cin>>d;
    report(d);

    }
    else if(a.compare(b)==0){
    cout<<report(d);
    }
    else{
        continue;
    }
    }
    return 0;

}

