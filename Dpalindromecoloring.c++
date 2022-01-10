#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
#define eb emplace_back
#define ppb pop_back
#define fios   ios_base::sync_with_stdio(false);cin.tie(NULL);
#define cy(n) for(int i=0;i<n;++i)
using namespace std;
void solution()
{
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int>m;
    cy(n)
    {
        m[s[i]]++;
    }
    ll a=0,b=0;
    for(auto &it:m)
    {
        if(it.second>=2)
        {
            a+=it.second/2;
        }
        b+=(it.second%2);
    }
    ll div=a/k;
    b+=(a%k)*2;
    div*=2;
    if(b>=k)
    div++;
    cout<<div<<"\n";
}   
int main()
{
    fios
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}