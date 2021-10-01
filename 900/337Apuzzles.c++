#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    vector<int>v;
    for(int i=0;i<m;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    vector<int>v1;
    for(int i=0;i<=m-n;i++)
    v1.push_back(v[n-1+i]-v[i]);
    sort(v1.begin(),v1.end());
    cout<<v1[0];
}