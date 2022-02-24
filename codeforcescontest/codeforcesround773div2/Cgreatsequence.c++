#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
#define rp(i,a,n) for(int i=a;i<n;i++)
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    ll n,x;cin>>n>>x;
    multimap<ll,ll>v;
    rp(i,0,n)
    {
        ll a;cin>>a;
        v.in({a,i});
    }
    int cnt=0;
    for(auto &it:v)
    {
        int val=it.first;
        auto it1=v.find(val*x);
        if(it1!=v.end())
        {
            cnt++;
            v.erase(it1);
        }
    }
    cout<<n-2*cnt<<endl;
    
}
int main()
{
    fios int t;
        cin>>t;
        while(t--)
        solution();
    
}