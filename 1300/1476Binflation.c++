#include<bits/stdc++.h>
#define ll long long
#define lld  long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
    int n,k;cin>>n>>k;
    vector<lld>v;
    for(int i=0;i<n;i++)
    {
        lld a;cin>>a;
        v.pb(a);
    }
    lld base=v[0];
    ll ans=0;
    ll res=0;
    for(int i=1;i<n;i++)
    {
        lld  x;
        x=(v[i]/base)*1.0;
        if(x<=(k*1.0/100)*1.0)
        {
            base+=v[i];
           // cout<<base<<endl;
        }
        else
        {
            lld temp,temp1;
            temp=v[i]*100;
            temp1=base*k;
           // cout<<temp<<" "<<temp1<<" ";
            ans=ceil((temp*1.0-temp1*1.0)/k*1.0);
            res+=ans;
            base+=ans;
            base+=v[i];
        }
       // cout<<base<<endl;
        //cout<<ans<<endl;
    }
    cout<<res<<endl;
}
int main()
{
    fios int t=1;
    cin>>t;
    while(t--)
    solution();
}
   
