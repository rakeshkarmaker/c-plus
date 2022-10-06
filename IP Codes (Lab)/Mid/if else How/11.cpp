/*
11. Write a program to check whether an entered character is lowercase ( a to z ) or uppercase (
A to Z ).
*/
#include <iostream>
#include <ctype.h> // Required for is upper and is lower function
using namespace std;
int main()
{
    char ch;
    cout << "Enter character :" << endl;
    cin >> ch;
    if (isupper(ch))
    {
        cout << "Upper case!" << endl;
    }
    else if (islower(ch))
    {
        cout << "Lower case!" << endl;
    }
    else
    {
        cout << "Invalid case, not an alphabet!" << endl;
    }

    return 0;
}




//  Alternative 01
//  --------------
// int main()
// {
//     char a;
//     cout << "Enter character :" << endl;
//     cin >> a;
//     if (a >= 65 && a <= 90)
//     {
//         cout << "Upper case!" << endl;
//     }
//     else if (a >= 97 && a <= 122)
//     {
//         cout << "Lower case!" << endl;
//     }
//     else
//     {
//         cout << "Invalid case!" << endl;
//     }

//     return 0;
// }

//  Alternative 02
// -----------------
// int main(){
// char a;
// cout<<"Enter character :"<<endl;
// cin>>a;
// if(a>='A' && a<='Z'){
//     cout<<"Upper case!"<<endl;
// }
// else if(a>='a' && a<='z'){
//     cout<<"Lower case!"<<endl;
// }
// else {
//     cout<<"Invalid case!"<<endl;
// }
// return 0;
// }