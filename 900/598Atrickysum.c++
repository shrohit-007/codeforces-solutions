#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    for(int i=0;i<t;i++)
    {
        long long n;cin>>n;
        long long sum=n*(n+1)/2;
        int power=1;
        while(power<=n)
        {
           sum-=2*power;
           power*=2;
        }
        cout<<sum<<"\n";
    }
}