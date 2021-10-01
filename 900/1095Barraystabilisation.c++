#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    int res=min(v[n-1]-v[1],v[n-2]-v[0]);//as  you can see the logic here is that we have to think for minimum also if we remove minimum and the element after minimum is very big the then the difference will be also minimum so that can also be the case;

    cout<<res;

}