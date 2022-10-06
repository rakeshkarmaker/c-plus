/*
Map In C++ STL | C++ Tutorials for Beginners #73
*/
#include <iostream>
#include<string>
#include<map>

using namespace std;

//Map is an associative arraty
int main(){

    map<string , int > marksMap;
    marksMap["Raj"] = 98;
    marksMap["Rakesh"] = 6;
    marksMap["Ananna"] = 9;
    map<string, int> :: iterator iter;

    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";

     //Here (*iter) give us the key and the first() and the second() methord added via dot operator
     //will give the first and the 2nd element's value
     //first() will give the name & second() method will give the number;
     }
    




return 0;
}