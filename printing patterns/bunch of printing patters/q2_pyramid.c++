#include <iostream>
using namespace std;
int main() // pyrmid pattern
{
  int i, j, r;
  cout << "enter no. of rows: ";
  cin >> r;
  for (i = 1; i <= r; i++)
  { for(j=1;j<=r-i;j++)
    cout<<" "; 
    for(j=1;j<=2*i-1;j++)
    cout<<"*";
    
    cout << endl;
  }
  return 0;
}