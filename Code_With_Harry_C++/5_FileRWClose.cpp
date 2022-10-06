#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    //Connecting our file with fout stream
    ofstream fout("sample60.txt");

    //Creating a string and taking user input
    string name;
    cout<<"Enter your name: ";
    cin>>name;


    //Writting to the file
    fout<<name+" is my name"; //fout<<name<<" is my name"; (alternative)
    fout.close();


    //Reading from the file
    ifstream fin("sample60.txt");
    string content;
    getline(fin,content);
   // fin>>content; //type one: will only take the first word as input. 
    cout<<content<<" , also what the content is!"<<endl;
    fin.close();
    


    return 0;



}