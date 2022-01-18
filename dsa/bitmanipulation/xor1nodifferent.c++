#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int n;cin>>n;
    int res=0;// as we know xor of 0 and any no. will be n
    //we  just have to tell that in a array all the elements will be present twice and a single element will be present once what is that element;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        res^=a;
    }
    cout<<res;
}