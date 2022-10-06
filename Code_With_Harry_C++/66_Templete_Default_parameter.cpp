/* 

C++ Templates: Class Templates with Default Parameters | C++ Tutorials for Beginners #66

watch?v=IdY8t0n8VBs

*/
#include <iostream>
using namespace std;


template<class t1 = int, class t2 = float,class t3 = char>

class myClass{
    
    public:
    t1 data1;
    t2 data2;
    t3 data3;
    
    myClass(t1 a,t2 b,t3 c){

        data1= a;
        data2 = b;
        data3 = c;

    }
    void display(){
        cout<<"The value of a is : "<<this->data1<<endl;
        cout<<"The value of b is : "<<this->data2<<endl;
        cout<<"The value of c is : "<<this->data3<<endl;
    
    }
};


int main(){

myClass<> obj(4 , 6.4 , 'z');
obj.display();


myClass<float, char,char > obj1(4 , 'g' , 'z'); // will give a float value in the middle instead of char 
obj.display();

return 0;
}