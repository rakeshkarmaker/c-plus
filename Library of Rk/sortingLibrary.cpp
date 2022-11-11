#include <iostream>
using namespace std;

void PrintArray(int A[],int n);

void BubbleSort(int A[],int n){
    int flag=0,count=0;

    for(int i =  0; i<n-1;i++){
        for(int j = 0 ; j<n-i-1;j++){
                if(A[j]>A[j+1]){
                swap(A[j],A[j+1]);
                flag++;
            }
            count++;
        }

    }
    

PrintArray(A,n);
cout<<"Number of comparisons = "<<count<<endl;
// cout<<"Number of comparisons = "<<n*(n-1)/2<<endl;
cout<<"Number of exchanges = "<<flag<<endl;


}

void SelectionSort(int A[],int n){
  int flag=0,count=0,k;

    for(int i =  0; i<n-1;i++){

        k = i;
        for(int j = i+1 ; j<n;j++){
            if(A[k]>A[j]){ 
                k=j;
            }
            count++;
        }
        if(k != i){
        swap(A[k],A[i]);
        flag++;
        }

    }

PrintArray(A,n);
cout<<"Number of comparisons = "<<count<<endl;
// cout<<"Number of comparisons = "<<n*(n-1)/2<<endl;
cout<<"Number of exchanges = "<<flag<<endl;

}


void InsertionSort(int A[],int n){
    int j,key,count=0,shift = 0;

   for (int i = 1; i < n; i++)
    {
        key = A[i];
        j = i - 1;
        count++;

        // Move elements of arr[0..i-1], 
        // that are greater than key, to one
        // position ahead of their
        // current position
    for ( ; (j >= 0 && A[j] > key); j--) { 
            A[j + 1] = A[j];
            count++;
            shift++;
        } 
        A[j + 1] = key;
    }
 PrintArray(A,n);
cout<<"Number of comparisons = "<<count<<endl;
cout<<"Number of Shifts = "<<shift<<endl;
}

void PrintArray(int A[],int n){
    cout<<"{";
    for(int i = 0 ; i<n;i++){
        cout<<A[i];
        if(i != n-1)
        cout<<",";
  }
   cout<<"}"<<endl;
}

int main(){
int arr[] = {92, 82, 21, 16, 18, 95};
int n = sizeof(arr)/sizeof(arr[0]);

cout<<"\nInput:\n";
PrintArray(arr,n);

cout<<"\nOutput:\n";
BubbleSort(arr,n);

return 0;
}