#include<iostream>
using namespace std;
class Batman{
    int data1;
    public:
        Batman(int i){
            data1 = i;
            cout<<"Batman class constructor called"<<endl;
        }
        void printDataBase1(void){
            cout<<"The Batman appeared in "<<data1<<endl;
    }
		~Batman(){ cout<<"Batman said, I am vengeance!"<<endl; }
};

class GreenArrow{
    int data2;

    public:
        GreenArrow(int i){
            data2 = i;
            cout << "GreenArrow class constructor called" << endl;
        }
        void printDataBase2(void){
            cout << "The GreenArrow appeared in " << data2 << endl;
        }
		~GreenArrow(){ cout<<"GreenArrow said, You have failed this city!"<<endl; }
};

class Robin: public GreenArrow, public Batman{
    int derived1, derived2;
    public:
        Robin(int a, int b, int c, int d) : GreenArrow(b), Batman(a){
            derived1 = c;
            derived2 = d;
            cout<< "Robin class constructor called"<<endl;
        }
        void printDataDerived(void){
            cout << "Robin appeared in " << derived1 << endl;
            cout << "The Nightwing appeared in " << derived2 << endl;
        }
		~Robin(){ cout<<"Robin said, Justice not vengeance!"<<endl; }
};
 class A{ public:
            A(){ cout<<"Smile \n"; }
        };
        class B{ public:
            B(){ cout<<"Face \n"; }
        };
        class Joker : public A , public virtual B {
        };

int main(){
    double i=1.00;
	Robin z(1939,1941, 1940, 1940);
    z.printDataBase1();
    z.printDataBase2();
    if (i-->0){
    cout<<"Joker said: Lets put!\n";
	Joker laughs;
	}
    z.printDataDerived();
    return 0;
}
