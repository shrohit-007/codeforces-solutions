#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000+7
using namespace std;
int main()
{
    int n,x;cin>>n>>x;
    unordered_set<int>m;
    int ans=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        int res=a^x;
        if(m.find(res)!=m.end())
        {
            ans++;
            cout<<a<<" "<<res<<endl;
        }
       m.in(a);
    }
    cout<<ans<<endl;
}