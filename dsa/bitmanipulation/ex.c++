#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long temp=n;
        int cnt=0;
        while(n>1)
        {
            n/=2;
            cnt++;
        }
        if(temp==2*(1<<(cnt-1)))
        {
            cout<<temp/2<<"\n";
        }
        else
        {
            long long mx;
            mx=max(temp-pow(2,cnt)+1,pow(2,cnt)-pow(2,cnt-1));
            cout<<mx<<"\n";
        }
    }
}