void printA(){
    cout<<"0000000\n0     0\n0     0\n0000000\n0     0\n0     0\n"<<endl;
}

void printChar(char c){
    c = toupper(c);
    if (c=='A')
    printA();

}
int main(){

string sentence;
cout<<"enter sentence: ";
cin>> sentence;

for(unsigned int i = 0; i<sentence.length(); i++) {
    char c = sentence[i];
    if(c=='a')
    printA();
}
return 0;

}
