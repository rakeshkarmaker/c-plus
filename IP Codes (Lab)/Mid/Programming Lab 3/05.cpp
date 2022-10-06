#include <iostream>

using namespace std;

int main()
{
int a [3] = {1,2,3};
int b [3] = {4,5,6};

 int n = sizeof(a)/sizeof(a[0]) + sizeof(b)/sizeof(b[0]);

 int c [n];

 for (int i = 0; i< n ; i++)
{
if (i<sizeof(a)/sizeof(a[0])){
c[i] = a[i];
}
else{
c[i]= b[i-sizeof(a)/sizeof(a[0])];
}

}

 for (int i = 0; i< 6 ; i++)
{
cout<<c[i]<<endl;
}

}
