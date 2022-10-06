/*  Class templetes with multiple (comma separated) perameters.

template<class t1, class t2>
class nameOfClass{
    //body
};

*/
#include <iostream>
using namespace std;


template<class t1, class t2>
class myClass{
    
    public:
    t1 data1;
    t2 data2;
    
    myClass(t1 a,t1 b){

        data1= a;
        data2 = b;

    }
    void display(){
        cout<<this->data1<<" , "<<this->data2<<endl;
    }
};


int main(){

myClass <char,float> obj('c',1.5);

obj.display();

return 0;
}