#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream out;// object creation of the ofstream library claass
    out.open("sample62.txt");
    out<<"This is the 1st line\n";
    out<<"This is the 2nd line\n";
    out<<"This is the 3rd line\n";
    out.close();


    ifstream in;
    string st;
    string st2;
    
    in.open("sample62.txt");
    //Type 1A:
    // in>>st; //will take 1st word | Gives the same outcome as given below.
    
    // Type 1B:
    // in>>st2; //will take 2st word 
    //in>>st>>st2; //will take 1st word in st then take 2nd word in st2 
    
    //cout<<st<<" "<<st2; //output on Type 1A,1B
    
    //Type 2: 
    while (in.eof()==0 ){ //eof 
        getline(in,st);
        cout<<st<<endl;
    }
    
    
    
    in.close();
    return 0;

}