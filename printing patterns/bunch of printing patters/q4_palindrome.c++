#include<iostream>
using namespace std;
int main()//palindrome pyramid pattern
   { int i,j,r;
    cout<<"enter the no. of rows.";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=r-i;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<""<<j;
        for(j=i;j>1;j--)
        cout<<""<<j-1;
        cout<<endl;

    } return 0;
}        
