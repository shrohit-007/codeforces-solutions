#include<iostream>
using namespace std;
int main()//left pyramid
{
    int i,j,r;
    cout<<"enter no. of rows";
    cin>>r;
    for(i=0;i<r;i++)
    {
        for(j=0;j<i+1;j++)
        cout<<"*";
        cout<<endl;

    }
}