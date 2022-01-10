#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
#define eb emplace_back
#define ppb pop_back
using namespace std;
void solution()
{
    int n;cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        v.pb(a);
    }
    unordered_set<ll>m;
    for(int i=0;i<n;i++)
    {
        ll x=v[i];
        if(x<=n && m.find(x)==m.end())
        {
            m.in(x);
        }
        else
        {
            while(x>=1)
            {
                x=floor(x/2.0);
                if(x<=n && m.find(x)==m.end())
                {
                    m.in(x);
                    break;
                }
            }
        }
    }
    int flag=0;
    for(int i=1;i<=n;i++)
    {
        if(m.find(i)==m.end())
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    cout<<"NO"<<"\n";
    else
    cout<<"YES"<<"\n";
  
}   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}