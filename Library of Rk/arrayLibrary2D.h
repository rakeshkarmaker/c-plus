#include <bits/stdc++.h>
#include "ComparisonLibrary.h"
using namespace std;


//2D Array Custom Library  !============================

void input2DArray(int ** array, int size) {
    for(int r = 0; r < size; ++r)
        for(int c = 0; c < size; ++c)
            scanf("%d",&array[r][c]);//  cin >> *(array+r*size+c);
}

void print2DArray(int **array, int size) {
    for(int r = 0; r < size; ++r){
        for(int c = 0; c < size; ++c)
                printf("%d\t",array[r][c]); // cout<<*(array+r*size+c)<<" ";
    cout<<endl;
    }
cout<<endl;
}

void reversePrint2DArray(int **array, int size) {
    for(int r = size-1; r >= 0; --r){
        for(int c = size-1; c >= 0; --c){
        printf("%d\t",array[r][c]); // cout<<*(array+r*size+c)<<" ";  
        } 
    cout<<endl;
    }
cout<<endl;
}

void searchIn2DArray(int **array, int size, int searchKey) {
    for(int r = 0; r < size; ++r){
        for(int c = 0; c < size; ++c){
            if(searchKey == array[r][c]){
                cout<<"SearchKey: "<<searchKey<<" was found on column: "<<r<<" & row: "<<c<<endl;
            }
        }
    }
}

void findMax2DArray(int **array, int size) {
    int max = 0;
    for(int r=0;r<size;r++){
        for(int c = 0; c < size; ++c){
            if(greaterFunc(max,array[r][c]) > max)
                max =greaterFunc(max,array[r][c]);
        }
    }
    cout<<"The max value of the 2d array is : "<<max<<endl;

}
void findMin2DArray(int **array, int size) {
    int min = array[0][0];
    for(int r=0;r<size;r++){
        for(int c = 0; c < size; ++c){
            if(lesserFunc(min,array[r][c]) < min)
                min =lesserFunc(min,array[r][c]);
        }
    }
    cout<<"The minimum value off the 2d array is : "<<min<<endl;


}
void copy2DArray(int **sourceArray, int **destinationArray, int size) {
       if((sizeof(**sourceArray)/sizeof(int)) != (sizeof(**destinationArray)/sizeof(int))){
        cout<<"Error! The array sizes are different\n";

    }else{
            for(int r=0;r<size;r++){
                for(int c = 0; c < size; ++c){
                destinationArray[r][c] = sourceArray[r][c];
            }
    }
}
}
// int** multipication2DArray(int **Array1, int **Array2, int size) {
//     int arrSum[size][size]; 
    
//       for(int j = 0; j<size;j++){
//         int flag=0;
//         cout<<"|";
//         for(int k = 0; k<size;k++){

//             arrSum[j][k] = Array1[j][k] +Array2[j][k];

//             cout<<arrSum[j][k];  
      
//         }
      
//       return (int**)arrSum;
// }
// }

void multipication2DArray(int **Array1, int **Array2,int** arrSum, int size) {
        
      for(int j = 0; j<size;j++){
        int flag=0;
        cout<<"|";
        for(int k = 0; k<size;k++){

            arrSum[j][k] = Array1[j][k] +Array2[j][k];

            cout<<arrSum[j][k];  
      
        }
      
    }

}
