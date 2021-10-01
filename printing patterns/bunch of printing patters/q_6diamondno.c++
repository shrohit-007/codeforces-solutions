#include<iostream>
using namespace std;
int main()
{
    int i,j,r;
    cout<<"enter the no. of rows:";
    cin>>r;
    for(i=1;i<=r/2;i++)
    {
        for(j=1;j<=i;j++)
        cout<<""<<i;
        cout<<endl;
    }
    for(i=r/2-1;i>=1;i--)
    {
        for(j=0;j<i;j++)
        cout<<""<<i;
        cout<<endl;
    }
}