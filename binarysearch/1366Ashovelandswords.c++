#include<bits/stdc++.h>
#define ll long long
using namespace std;
void solving()
{
    ll a,b;cin>>a>>b;
    if(a>=2*b)
    cout<<b<<"\n";
    else if(b>=2*a)
    cout<<a<<"\n";
    else 
    cout<<(a+b)/3<<"\n";
}
int main()
{
    ll t;cin>>t;
    while(t--)
    solving();
}