#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
void solution()
{
    int n,q;cin>>n>>q;
    vector<ll>v;
    ll mx=0;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        mx=max(a,mx);
        v.pb(a);
    }
    int flip=0 ;// we are first finding the peak value ;
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        if(flip==0)
        {
            if(v[i]<v[i+1])
            {
                continue;
            }
            else
            {
                flip=1;
                ans+=v[i];
            }
        }
        else
        {
            if(v[i]>v[i+1])
            {
                continue;
            }
            else
            {
                flip=0;
                ans-=v[i];
            }
        }
    }
    if(flip==0)// we would have been finding the peak value and we went out of the loop means that our last value is peak value;
    {
        ans+=v[n-1];
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solution();
    }
}
