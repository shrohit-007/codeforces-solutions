#include <iostream>
using namespace std;
int main() // hollow  pyrmid pattern
{
  int i, j, r;
  cout << "enter no. of rows: ";
  cin >> r;
  for (i = 1; i <= r; i++)
  { for(j=1;j<=r-i;j++)
    cout<<" ";
    for(j=1;j<=2*i-1;j++)
   { if(i==1 || i==r  || j==1 || j==2*i-1)
    cout<<"*";
    else 
    cout<<" ";
   }
    
    cout << endl;
  }
  return 0;
}