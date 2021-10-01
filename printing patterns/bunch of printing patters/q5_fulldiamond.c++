#include<iostream>
using namespace std;
int main()
{
    int i,j,k,r;
    cout<<"enter the no. of rows:";
    cin>>r;
    for(i=1;i<=r/2;i++)
    {
        for(j=1;j<=r/2-i;j++)
        cout<<" ";
        for(j=1;j<=i;j++)
        cout<<"* ";
        cout<<endl;
    }
    for(i=1;i<=r/2;i++)
    {
       for(k=1;k<i;k++)
        cout<<" ";
        for(j=0;j<=r/2-i;j++)
        cout<<"* ";
        cout<<endl;
    }return 0;
}
