#include<iostream>
#include<math.h>
using namespace std;
int main()
{ int i,j,r;
  cout<<"enter no. of rows";
  cin>>r;
  for(i=0;i<r;i++)
  { 
    int val=1;
    cout.width(r-i);
    for(j=0;j<=i;j++)
    {
      cout<<val<<" ";
      val=val*(i-j)/(j+1);
    }
    cout<<endl;

  }
  


  
}