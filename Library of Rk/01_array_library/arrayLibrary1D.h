#include <bits/stdc++.h>
using namespace std;


//1D Array Implementations  !============================

void print1DArray(int *array, int size){
    for(int i=0;i<size;i++){
        cout<<array[i]<<"\t";
    }cout<<endl<<endl;
}

void reversePrint1DArray(int *array, int size){
    for(int i=size-1;i>=0;i--){
        cout<<array[i]<<"\t";
    }cout<<endl<<endl;
}

void input1DArray(int *array, int size){
    for(int i=0;i<size;i++){
        cin>>array[i];
        }
}

void searchIn1DArray(int *array, int size, int searchKey) {
    for(int i=0;i<size;i++){
        if(searchKey == array[i]){
            cout<<searchKey<<" was found on the "<<i+1<<" position of the array\n\n";
        }
    }
}

int abs(int val){
    if(val < 0) return -val;
    else return val;
}
int greaterFunc(int val1, int val2){    return (val1+val2+abs(val1-val2))/2;
}

void findMax1DArray(int *array, int size) {
    int max = 0;
    for(int r=0;r<size;r++){
            if(greaterFunc(max,array[r]) > max)
                max =greaterFunc(max,array[r]);
        }
    cout<<"The max value off the array is : "<<max<<endl<<endl;
}

int lesserFunc(int val1, int val2){     return (val1+val2+abs(val1-val2))/2;
}

void findMin1DArray(int *array, int size) {
     int min = array[0];
    for(int i=0;i<size;i++){
            if(lesserFunc(min,array[i]) < min)
                min =lesserFunc(min,array[i]);
        }
    cout<<"The minimum value off the array is : "<<min<<endl<<endl;

}

void copy1DArray(int *sourceArray, int *destinationArray, int size) {
    if((sizeof(sourceArray)/sizeof(int)) != (sizeof(destinationArray)/sizeof(int))){
        cout<<"Error! The array sizes are different\n";

    }else{
        for(int i=0;i<size;i++)
            destinationArray[i] = sourceArray[i];
    }
}
