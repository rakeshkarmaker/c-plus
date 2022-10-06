#include "iostream"
using namespace std; //Using is invalid

class A 
{

 	public:
	int x;
 	// should be private int x;
 	void getx() //void is missing
    {
 	    cout << "enter value of x: "; 
	    cin >> x;
    }
};
class B
{
 	public: //public:: is error
 	int y;
 	void gety()
 	{
 	    cout << "enter value of y: "; cin >> y;
 	}
};
class C : public A, public B   //C is derived from class A and class B // not a b. Public is invalid
{
 	public:
 	void sum()
 	{
 	    cout << "Sum = " << x + y;
	   // return x+y; //void returns no value
 	}
};

int main()
{
 	 C obj1; //object of derived class C
 	 obj1.getx();
 	 obj1.gety();
 	 obj1.sum();
 	 return 0;
}   	//end of program