#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    long long sum=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<m;i++)
    {
        if(v[i]<0)
        sum+=v[i];
        else
        break;
    }
    cout<<sum*(-1);


}