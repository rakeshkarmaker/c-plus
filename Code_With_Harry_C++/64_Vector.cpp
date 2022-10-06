#include <iostream>
using namespace std;


template <class T> //temple used here and in order to acheive passing data type to the class.
//It gives us the ability to implement DRY more easily.
class vector
{

public:
    T *arr; //int *arr;
    int size;

    vector(int m) {
        size = m;
        arr = new T[size]; // arr = new int[size];
    
    }
    // Will sum and return integer, &v in parameter to take the address of the vector class's instance   
    
    T dotProduct(vector &v){  // int dotProduct(vector &v){
        T d = 0; // int d = 0;

        for (int i = 0; i < size; i++)
        {

            d += this->arr[i] * v.arr[i];
        }
        return d;
    }

};

int main()
{
    // vector <int> v1(3); //vector 1
    // v1.arr[0] = 4;
    // v1.arr[1] = 3;
    // v1.arr[2] = 1;

    // vector <int> v2(3); //vector 2
    // v2.arr[0]=1;
    // v2.arr[1]=0;
    // v2.arr[2]=1;
    // int a = v1.dotProduct(v2);

  vector <float> v1(3); //vector 1
    v1.arr[0] = 1.4;
    v1.arr[1] = 3.3;
    v1.arr[2] = 0.1;
    
    vector <float> v2(3); //vector 2
    v2.arr[0]=0.1;
    v2.arr[1]=1.90;
    v2.arr[2]=4.1;

    float a = v1.dotProduct(v2);

    cout << a << endl;
    return 0;
}