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
    sort(v.begin(),v.end());
    if(n==1)
    cout<<"0"<<"\n";
    else
    {
        ll l=v[0];
        ll r=v[n-1];
        cout<<r-l<<"\n";
    }
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