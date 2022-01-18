#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define pb push_back
#define in insert
#define alla(s) s.begin(),s.end()
#define alld(s) s.rbegin(),s.rend()
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
    ll n,w;cin>>n>>w;
    ll sum=0;
    multiset<ll>m;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        m.in(a);
    }ll ans=1,temp=w;
    while(!m.empty())
    {
        auto it=m.upper_bound(temp);
        if(it==m.begin())
        {
            ans++;
            temp=w;
        }
        else
        {
            it--;
            ll val=*it;
            temp-=val;
            m.erase(it);
        }
    }

    cout<<ans<<endl;
}
int main()
{
    fios int t=1;
    cin>>t;
    while(t--)
    solution();
}
   