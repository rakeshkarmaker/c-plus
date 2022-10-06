/*
15. Write a c++program to find whether a given year is a leap year or not.
Test Data: 2016
Expected Output :
2016 is a leap year.
*/
#include <iostream>
#include <string>

using namespace std;
int main()
{
    int n;

    string str;
    cout << "Type n lines: " << endl;
    cin>>n;

    for (int i = 0; i < n; i++)  { // Printing n lines.
        cin >> str;
        if(str.length()>10){
            int count=str.length()-2; // 1st last displayed so 2 deducted.
            cout<<str[0]<<count<<str[count+1]<<endl; //0 index with 1st, mid ex.= 15.| 16 values before the last | middle lenth= index no. before last  (lenth+1)
        }
        else{
            cout<<str<<endl;
        }
    }
    return 0;
}