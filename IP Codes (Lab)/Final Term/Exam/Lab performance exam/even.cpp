
#include<iostream>
using namespace std;

class Hawkeye
{

public:
    Hawkeye()
    {
        cout<<"Hawkeye Constructed"<<endl;
    }
    ~Hawkeye()
    {
        cout<<"Hawkeye Destructed"<<endl;
    }

};

class Falcon
{

public:
    Falcon()
    {
        cout<<"Falcon Constructed"<<endl;
    }
    ~Falcon()
    {
        cout<<"Falcon Destructed"<<endl;
    }

};


class Avengers : public Falcon, public Hawkeye
{

public:
    Avengers()
    {
        cout<<"Avengers assemble"<<endl;
    }
    ~Avengers()
    {
        cout<<"Avengers Endgame"<<endl;
    }
};

class Atom
{

public:
    Atom()
    {
        cout<<"Atom Constructed"<<endl;
    }
    ~Atom()
    {
        cout<<"Atom Destructed"<<endl;
    }

};

class Firestom
{

public:
    Firestom()
    {
        cout<<"Firestom Constructed"<<endl;
    }
    ~Firestom()
    {
        cout<<"Firestom Destructed"<<endl;
    }

};


class justise_league : public Atom, public Firestom
{

public:
    justise_league()
    {
        cout<<"justise league assemble"<<endl;
    }
    ~justise_league()
    {
        cout<<"justise league fallen"<<endl;
    }
};

class Superhero : public Avengers, public justise_league
{


};

int main()
{

    Superhero  obj3;

    return 0;
}
