#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 100000000+7
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0;
    for(int i=1;i<=n*n/2;i++)
    {   cnt++;
        cout<<i<<" "<<n*n+1-i<<" ";
        if(cnt==n/2)
        {
            cout<<"\n";
            cnt=0;
        }
    }
   
}