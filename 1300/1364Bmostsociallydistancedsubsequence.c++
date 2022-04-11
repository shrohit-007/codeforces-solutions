#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
using namespace std;
void solution()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.pb(a);
    }
    int mn=INT_MAX,mx=INT_MIN;
    vector<int>ans;
    ans.pb(v[0]);
    int f=-1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i]<v[i+1])
        {
            mx=max(mx,v[i+1]);
            if(f==0)
            {
                ans.pb(mn);
                mn=INT_MAX;
            }
            f=1;
        }
        else
        {
            if(f==1)
            {
                ans.pb(mx);
                mx=INT_MIN;
            }
            mn=min(mn,v[i+1]);
            f=0;
        }
    }
    if(f==1)
    ans.pb(mx);
    else if(f==0)
    ans.pb(mn);
    cout<<ans.size()<<endl;
    for(int x:ans)
    cout<<x<<" ";
    cout<<endl;
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