#include <bits/stdc++.h>
using namespace std;


int abs(int val){
    if(val < 0) return -val;
    else return val;
}
int greaterFunc(int val1, int val2){    return (val1+val2+abs(val1-val2))/2;
}
int lesserFunc(int val1, int val2){     return (val1+val2+abs(val1-val2))/2;
}
