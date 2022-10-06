#include <iostream>
using namespace std;
class A{
    public:
    A(){
        cout<<"A constructed"<<endl;
    }

    ~A(){
        cout<<"A destructed"<<endl;
    }


};
class B: public A {
    public:
    int p=10;
    B(){
        cout<<"B constructed"<<endl;
        int p=10;
    }

    ~B(){
        cout<<"B destructed"<<endl;
    }
    void showdata_1(){
        cout<<"Data shown!"<<endl;
    }


};


int main(){

A obj1;
B obj2;
obj2.showdata_1();
cout<<obj2.p<<endl;

}

