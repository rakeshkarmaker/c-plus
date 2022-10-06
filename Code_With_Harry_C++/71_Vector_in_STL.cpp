/*
Vector In C++ STL | C++ Tutorials for Beginners #71
*/
#include <iostream>
#include<vector>
using namespace std;

void display(vector <int> &v){

cout<<endl<<endl<<"Your entered items are: "<<endl;
 for (int i = 0; i < v.size(); i++)
    {
       cout<< v[i]<<"\t";
       cout<<v.at(i)<<"\t";
    }


}

int main(){
    vector <int> obj;
    int element;
    
    cout<<"Enter four elements to the vector: "<<endl;

    for (int i = 0; i < 4; i++)
    {
        cout<<"Enter "<<i<<"th elements to the vector:"<<endl;
        cin>>element;
        obj.push_back(element);
                
    }
    
    vector <int> :: iterator iter = obj.begin();
    obj.insert(iter,566);


    display(obj);
    
    
    return 0;
}