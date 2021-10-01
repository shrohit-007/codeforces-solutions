#include<bits/stdc++.h>
#define ll long long
using namespace std; 
ll power(ll  n,ll m)
{   ll res=1;
    for(int i=1;i<=n;i++)
    {
        res*=2;
        if(res>m)
        {
            return m;
        }
    }
    return m%res;
}
int main()
{
    ll n,m;cin>>n>>m;
    cout<<power(n,m);

}