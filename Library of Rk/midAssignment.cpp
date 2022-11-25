#include <bits/stdc++.h>
#include "arrayLibrary1D.h"
#include "arrayLibrary2D.h"
using namespace std;

int main(){
int arr[5];
int arr1[5];

cout<<"User Input for 1D array: \n";
input1DArray(arr,sizeof(arr)/sizeof(int));

cout<<"Array in normal order:\n";
print1DArray(arr,sizeof(arr)/sizeof(int));

cout<<"Array in Reverse order:\n";
reversePrint1DArray(arr,sizeof(arr)/sizeof(int));

searchIn1DArray(arr,sizeof(arr)/sizeof(int),5);
findMax1DArray(arr,sizeof(arr)/sizeof(int));
findMin1DArray(arr,sizeof(arr)/sizeof(int));

cout<<"Copying to new array and displaying:\n";
copy1DArray(arr,arr1,sizeof(arr)/sizeof(int));
print1DArray((int*)arr1,sizeof(arr)/sizeof(int));

cout<<endl;

int size=2;
int **arr2d = new int*[2];
    arr2d[0]=new int[size];
    arr2d[1]=new int[size];

cout<<"User Input for 2D array: \n";
input2DArray(arr2d,size);

cout<<"Array in normal order:\n";
print2DArray(arr2d,size);

cout<<"Array in Reverse order:\n";
reversePrint2DArray(arr2d,size);

searchIn2DArray(arr2d,size,4);
findMax2DArray(arr2d,size);
findMin2DArray(arr2d,size);

cout<<"Copying into a new 2D array and displaying:\n";

int **arr2dNew = new int*[2];
    arr2dNew[0]=new int[size];
    arr2dNew[1]=new int[size];
copy2DArray(arr2d, arr2dNew,size);
print2DArray(arr2d,size);


// int **arr2d[10][10];
// findMax2DArray((int **)arr2d,size);
// findMin2DArray((int **)arr2d,size);
return 0;
}
