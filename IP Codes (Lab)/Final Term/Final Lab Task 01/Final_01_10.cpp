/*10.
Print the multiplication table of 15 using function.
*/
#include <iostream>
using namespace std;

void multiplication(int a){

    for(int i=1 ;i<=10;i++){
        int result = a*i;
        cout<<endl<<a<<" * "<<i<<" = "<<result;
    }
}
int main()
{
    int a;
    cout<<"Type the number to see its multipication table : ";
    cin>>a;
    cout<<"\n\nThe multipication table of "<<a<<" is :"<<endl;
    multiplication(a);

    return 0;
}

