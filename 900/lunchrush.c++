#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;cin>>n>>k;
    ll maxx=-1000000000000000000000;
    for(int i=0;i<n;i++)
    {
        ll a ,b ;cin>>a>>b;
        ll sum=0;
        if(b>k)
        sum=a-(b-k);
        else
        sum=a;
        maxx=max(sum,maxx);
    }
    if(maxx==0)
    cout<<"-1";
    else
    cout<<maxx;

}