#include<iostream>
using namespace std;
int main()//right  hollow pyrmdid
{
    int i,j,r;
    cout<<"enter no. of rows";
    cin>>r;
    for(i=0;i<r;i++)
    {   
        for(j=r-1;j>=i;j--)
        {
        if(i==0 || i==r-1 ||  j==r-1 || j==i)
         cout<<"*";
         else
         {
             cout<<" ";
         }
         
        }
        cout<<endl;

    }
}