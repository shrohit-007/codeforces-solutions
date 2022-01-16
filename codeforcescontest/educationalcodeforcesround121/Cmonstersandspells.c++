#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define ul unsigned long long
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
   int n;cin>>n;
   vector<ll>ks,hs,v(n,0);
   for(int i=0;i<n;i++)
   {
       ll a;cin>>a;
       ks.pb(a);
   }
   for(int i=0;i<n;i++)
   {
       ll b;cin>>b;
       hs.pb(b);
   }
   for(int i=0;i<n;i++)
   {
       for(int j=i-1;j>=0;j--)
       {
           if(ks[i]-ks[j]>=hs[i])break;
           hs[i]=max(hs[i],ks[i]-ks[j]+hs[j]);
           v[j]=1;
       }
   }
   ll ans=0;
   for(int i=0;i<n;i++)
   {
       if(!v[i])ans+=hs[i]*(hs[i]+1)/2;
   }
    cout<<ans<<endl;
}

int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
