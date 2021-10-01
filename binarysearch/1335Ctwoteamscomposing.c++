#include<bits/stdc++.h>
#define ll long long 
#define pb push_back
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
void solving()
{
    int n;cin>>n;
    map<int,int>v;
    int x=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v[a]++;
        x=max(x,v[a]);
    }
    if(x==v.size())
    cout<<v.size()-1<<"\n";
    else if(v.size()>x)
    cout<<x<<"\n";
    else
    cout<<v.size()<<"\n";

    
}
int main()
{
    int t;cin>>t;
    while(t--)
    solving();
}