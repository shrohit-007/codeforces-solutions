#include<bits/stdc++.h>
using namespace std;
int main()
{   ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int a ;cin>>a;
            v.push_back(a);
        }
    int ans=2;
    if(is_sorted(v.begin(),v.end()))
    ans=0;
    else if(v[0]==1 || v[n-1]==n)
    ans=1;
    else if(v[0]==n && v[n-1]==1)
    ans=3;
    cout<<ans<<endl;
    }
}