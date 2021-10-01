#include<iostream>
using namespace std;
int main()//rectangle pattern
{
    int i,j,r,c;
    cout<<"enter the no. of rows"<<endl;
    cin>>r;
    cout<<"enter the no. of columns"<<endl;
    cin>>c; 
    for(i=0;i<r;i++)
   { for(j=0;j<c;j++)
    {
        cout<<"*\t";
    } cout<<endl;}
    return 0;

}