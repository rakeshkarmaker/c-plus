#include<iostream>
using namespace std;

class Khonshu {

public:
Khonshu(){
cout<<"Khonshu Constructed"<<endl;
}
~Khonshu(){
cout<<"Khonshu Destructed"<<endl;
}

};
class Randall : public Khonshu{

public:
Randall(){
cout<<"Randall Constructed"<<endl;
}
~Randall(){
cout<<"Randall Destructed"<<endl;
}
};

class MoonKnight: public Randall{

public:
MoonKnight(){
cout<<"MoonKnight Constructed"<<endl;
}

~MoonKnight(){
cout<<"MoonKnight Destructed"<<endl;
}
};
int main(){
//Khonshu obj1;
//Randall obj2;
MoonKnight obj3;

return 0;
}
