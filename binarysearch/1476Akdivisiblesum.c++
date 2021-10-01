#include<bits/stdc++.h>
#define ll long long
using namespace std; 
void solve()
{
    ll n,k;cin>>n>>k;
    if(n>k)
    {
        k=k*(ceil(1.0*n/k));
        if(k%n==0)
        cout<<k/n<<"\n";
        else
        cout<<k/n+1<<"\n";
    }
    else
    {
        if(k%n==0)
        cout<<k/n<<"\n";
        else
        cout<<k/n+1<<"\n";
    }
}
int main()
{
    int t;cin>>t;
    while(t--)
    solve();
}