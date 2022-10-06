#include <iostream>
#include <fstream>
using namespace std;

 int main(){
    string st = "Rakesh Karmaker";
    string st2;

    // Opening the files using constructor and Writing it:
    // ofstream out("sample.txt"); //Write operation
    // out<<st;


    // Opening the files using constructor and reading it:

    ifstream in("sample.txt");
    
    // in>>st2;
    getline(in,st2);
    
    cout<<st2;
    

    return 0;



 }