#include <iostream>
using namespace std;

int pathCount(int n, int m)
{
  if(n == 0 && m == 0)
    return 0;
  
  if(n == 0 || m == 0)
    return 1;
  
  return pathCount(n-1, m) + pathCount(n, m-1);
}

int main()
{
    int R ,C;
    cin>>R>>C;
  cout<<pathCount(R, C);
  
  cout<<endl;
  return 0;
}