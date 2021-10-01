#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    multimap<int,int>m;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        m.insert({-1*a,i});
    }
    long long sum=0,j=0;
    for(auto &it :m)
    {
         sum+=(it.first*(-1)*j+1);
         j++;
    }
    cout<<sum<<"\n";
    for(auto &it:m)
    cout<<it.second<<" ";
}