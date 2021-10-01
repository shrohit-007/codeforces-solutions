#include<iostream>
using namespace std;
int main()//right pyrmdid
{
    int i,j,r;
    cout<<"enter no. of rows";
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=r-1;j>=i;j--)
        cout<<"*";
        cout<<endl;

    }
}