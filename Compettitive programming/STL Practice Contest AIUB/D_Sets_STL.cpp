// Rakesh Karmaker || AMERICAN INTERNATIONAL UNIVERSITY BANGLADESH || BsCSE
#include <bits/stdc++.h>
#define ll long long //Making Preprocessor Directive to define long long in short
using namespace std;
int main()
{
    ll Q{0};
    cin >> Q; //The first line of the input contains  where  is the number of queries.
    set<int> s; //Creates a set of integers.
    short int y{0}; // y is the type of the query
    ll x{0};    //x is an integer that stores data about input value of each iteration
    while (Q--){ //While loop that runs Q times
        
        cin>>y>>x;

        if(y==1){
            s.insert(x);  //Inserts an integer x into the set s.

        }else if(y==2){
            s.erase(x);   //Erases an integer x from the set s.

        }else if(y==3){
            //Gives the iterator to the element val if it is found otherwise returns s.end() .
            set<int> :: iterator itr=s.find(x);     //So here, //If x is not present then itr==s.end().

            if(itr==s.end()){
                cout<<"No"<<endl;
            }else{
                cout<<"Yes"<<endl;
            }
        }else{}
    }
    return 0;
}