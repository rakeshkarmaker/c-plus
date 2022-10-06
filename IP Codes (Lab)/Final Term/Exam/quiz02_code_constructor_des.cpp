#include <iostream>
using namespace std;

 

class A{

 

    public:

 

    A()
    {
        cout<<"Constructor of Class A"<<endl;
    }

 

    ~A()
    {
        cout<<"Destructor of Class A"<<endl;
    }

 

    void ShowData()
    {
        cout<<"Some data of class A"<<endl;
        A obj;
    }

 

};

 

class B: public A{

 

    public:

 

    B()
    {
        cout<<"Constructor of Class B"<<endl;
    }

 

    ~B()
    {
        cout<<"Destructor of Class B"<<endl;
    }

 

    void ShowData()
    {
        cout<<"Some data of class B"<<endl;

 

        A obj1;
        obj1.ShowData();
    }

 

};

 

int main()
{
    A obj;
    B obj1;
    obj1.ShowData();
    obj.ShowData();

 

}