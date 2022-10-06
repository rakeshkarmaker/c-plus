//E
#include <iostream>

using namespace std;

int main()
{
    int Ram,Shyaam,Ajay,r;
    cout<<"Type age of Ram,Shyaam,Ajay:\n";
    cin>>Ram>>Shyaam>>Ajay;
    if (Ram<Shyaam && Ram<Ajay)
		cout<<"Ram is the youngest";
	else if(Shyaam<Ram && Shyaam<Ajay)
		cout<<"Shyaam is the youngest";
	else
        cout<<"Ajay is the younget";

    return 0;
}
