#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    if(n%2==0)
    {
        if(k<=n/2)
        cout<<2*(k)-1<<endl;
        else
        cout<<2*(k-n/2)<<endl;
    }
    else
    {
        if(k<=(n/2+1))
        cout<<2*(k)-1<<endl;
        else
        cout<<2*(k-n/2-1)<<endl;
    }
}