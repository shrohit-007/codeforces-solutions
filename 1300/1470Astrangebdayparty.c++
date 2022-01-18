#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
    ll n,m;cin>>n>>m;
    vector<ll>frnds,gift;
    unordered_map<ll,int>cntr;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        cntr[a]++;
    }
    for(auto &it:cntr)
    {
        frnds.pb(it.first);
    }sort(frnds.begin(),frnds.end());
    ll ans=0;
    vector<int>v(m+1,0);
    for(int i=1;i<=m;i++)
    {
        ll b;cin>>b;
        gift.pb(b);
    }
    for(int i=0;i<m;i++)
    {
         ll temp=frnds.back();
        if(cntr[temp]==0)
        {
            frnds.pop_back();
            if(frnds.empty())
            {break;}
            temp=frnds.back();
        }
        auto it=cntr.find(temp);
        if(it!=cntr.end())
        {
            if(temp>=i+1)
            {
                if(v[i+1]==0)
                {
                if(cntr[temp]>0)
                {ans+=gift[i];
                v[i+1]=1;
                cntr[temp]--;}
                }
            }
        }
    }
  
    for(int i=0;i<frnds.size();i++)
    {
        //cout<<frnds[i]<<endl;
        //if(frnds[i]-1>=0)
       
        ans+=(cntr[frnds[i]])*gift[frnds[i]-1];
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
   