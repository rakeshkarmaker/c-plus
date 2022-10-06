/*
6. Take input of age of 3 people by the user and determine oldest and youngest among
them.
*/
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Type the age of a,b and c; " << endl;
    cin >> a >> b >> c;

    if (a > b && a > c)
    {
        cout << "a is the oldest" << endl;
    }
    else
    {
        if (b > c)
        {
            cout << "b is the oldest" << endl;
        }
        else
        {
            cout << "c is the oldest" << endl;
        }
    }
    if (a < b && a < c)
    {
        cout << "a is the youngest" << endl;
    }
    else
    {
        if (b < c)
        {
            cout << "b is the youngest" << endl;
        }
        else
        {
            cout << "c is the youngest" << endl;
        }
    }
    return 0;
}