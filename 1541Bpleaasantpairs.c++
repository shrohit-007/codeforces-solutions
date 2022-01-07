#include<bits/stdc++.h>
using namespace std;
int main()
{
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;cin>>tt;
    while(tt--)
    {
        int n;cin>>n;
        long long a[n+4];
        for(int i=1;i<=n;i++)
        cin>>a[i];
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            for(int j=a[i]-(i%a[i]);j<=n;j+=a[i])
            if(j>i && a[i]*a[j]==(i+j))
            cnt++;
        }
        cout<<cnt<<"\n";
    }
}