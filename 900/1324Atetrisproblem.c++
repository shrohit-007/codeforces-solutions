#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int arr[n];
        for(int i=1;i<=n;++i)
        cin>>arr[i];
        int cnt[2]={};
        for(int i=1;i<=n;++i)
        cnt[arr[i]%2]++;
        if(cnt[0] && cnt[1])
        cout<<"NO\n";
        else
        cout<<"YES\n";
    }
}