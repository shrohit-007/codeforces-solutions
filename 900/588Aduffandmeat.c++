#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n;cin>>n;
    vector<pair<int,int>>v;
    ll sum=0;
    int k=0,x=0;
    for(int i=0;i<n;i++)
    {
        int a,p;cin>>a>>p;
        v.push_back({a,p});
    }
    int y=v[0].second;
    sum=v[0].first*v[0].second;
    for(int i=0;i<n-1;i++)
    {   y=min(v[i+1].second,y);
        if(v[i].second>v[i+1].second)
        k=i+1;
        if(v[i].second<=v[i+1].second)
        sum+=v[i+1].first*y;
        else
        { 
        sum+=v[i+1].first*y;}
    }
    cout<<sum<<"\n";

}