#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
   int n;cin>>n;
   unordered_map<int,vector<int>>m;
   for(int i=1;i<=n;i++)
   {
       ll a;cin>>a;
       m[a].pb(i);
   }
   ll res=INT_MIN,flag=0;
   for(auto & it:m)
   {
       int len=it.second.size();
       if(len>=2)
       {
           for(int i=1;i<len;i++)
           {
               ll temp=n-it.second[i]+it.second[i-1];
               flag=1;
               if(res<temp)
               res=temp;
           }
       }
   }
   if(flag!=1)
   cout<<"-1"<<endl;
   else
   cout<<res<<endl;
}
int main()
{
    fios int t;
    cin >> t;
    while (t--)
        solution();
}
