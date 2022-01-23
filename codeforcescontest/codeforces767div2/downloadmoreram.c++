#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ppb pop_back
#define in insert
#define all(s) s.begin(),s.end()
#define mod 1000000007
#define lld long double
#define vi vector<int>
#define spc " "
#define endl "\n"
#define fios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define repp(n)   for(int (i)=(0);(i)<(n);++i)
using namespace std;
void solution()
{
    int n,k;cin>>n>>k;
    vector<int>ai;
    vector<pair<int,int>>bii;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        ai.pb(a);
    }
    for(int i=0;i<n;i++)
    {
        int b;cin>>b;
        bii.pb({ai[i],b});
    }
    sort(all(bii));
    ll sum=k;
    for(int i=0;i<n;i++)
    {
        if(sum>=bii[i].first)
        {
            sum+=bii[i].second;
        }
        else
        break;
    }
    cout<<sum<<endl;
}
int main()
{
    fios
    int tt=1;
    cin>>tt;
    while(tt--)
    {
         solution();
    }
}
    
