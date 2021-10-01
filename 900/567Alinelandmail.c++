#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{   
    int n;cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    ll minn=0,maxx=0;
    for(int i=0;i<n;i++)
    {   // -5 -2 2 7;
        if(i==0)
        {
            minn=v[1]-v[0];
            maxx=v[n-1]-v[0];
        }
        else if(i==n-1){
            minn=v[n-1]-v[n-2];
            maxx=v[n-1]-v[0];
        }
        else
        {
            minn=min(v[i]-v[i-1],v[i+1]-v[i]);
            maxx=max(v[n-1]-v[i],v[i]-v[0]);
        }
        cout<<minn<<" "<<maxx<<endl;
    }
}