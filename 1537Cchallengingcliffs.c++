#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000+7
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
    int f,diff=INT_MAX;
    for(int i=0;i<n-1;i++)
    {
        
        if(diff>v[i+1]-v[i])
        {
            diff=v[i+1]-v[i];
            f=i;
        }
    }
    cout<<v[f]<<" ";
    for(int i=f+2;i<n;i++)
    cout<<v[i]<<" ";
    for(int i=0;i<f;i++)
    cout<<v[i]<<" ";
    cout<<v[f+1]<<"\n";

}
int main()
{
    int t;cin>>t;
    while(t--)
    solution();
}