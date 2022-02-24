#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    int n;cin>>n;
    unordered_map<ll,ll>v(n);
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v[a]++;
    }
    int x=v.size();
    vector<ll>v1(n+1);
    for(int i=1;i<=x;i++)
    cout<<x<<" ";
    for(int i=x+1;i<=n;i++)
    cout<<i<<" ";
    cout<<endl;
}
int main()
{
    fios int t;
        cin>>t;
        while(t--)
        solution();
    
}