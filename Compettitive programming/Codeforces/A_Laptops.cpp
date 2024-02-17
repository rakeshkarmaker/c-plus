// This is the code of RK The Phil. || AMERICAN INTERNATIONAL UNIVERSITY BANGLADESH || BsCSE
//https://codeforces.com/problemset/problem/456/A
#include <bits/stdc++.h>
using namespace std;
int main()
{

    ios_base ::sync_with_stdio(false); // makes cin and cout work faster in C++
    //A pair is a container which stores two values mapped to each other, and a vector containing multiple number of such pairs is called a vector of pairs. 
    vector < pair<int,int> > vecpair;
    int n{0},a{0},b{0};
    cin>>n;
    while(n--){
        cin>>a>>b;
        // Entering values in vector of pairs.
        vecpair.push_back(make_pair(a,b));
    }

    //Case 1 : Sorting the vector elements on the basis of first element of pairs in ascending order. 
    sort(vecpair.begin(), vecpair.end());

    for (int i = 1; i < vecpair.size(); i++)
    {
        if(vecpair[i-1].second>vecpair[i].second){
            cout<<"Happy Alex"<<endl;
            return 0;
        }

    }

    //Case 2 : Sorting the vector elements on the basis of second element of pairs in ascending order. 
    // Using sort() function to sort by 2nd element of pair
    //sort(vect.begin(), vect.end(), sortbysec);

    cout<<"Poor Alex"<<endl;

    return 0;
}
