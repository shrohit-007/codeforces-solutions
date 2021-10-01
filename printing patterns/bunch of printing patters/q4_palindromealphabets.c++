#include<iostream>
using namespace std;
int main()//palindrome pyramid pattern
   { int i,r;
   char j;
    cout<<"enter the no. of rows.";
    cin>>r;
    for(i=1;i<=r;i++)
    {
        for(j=65;j<i+65;j++)
        cout<<" "<<j;
        for(j=i+63;j>64;j--)
        cout<<" "<<j;
        cout<<endl;

    } return 0;
}        
