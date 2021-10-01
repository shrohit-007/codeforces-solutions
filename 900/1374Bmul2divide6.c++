#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        unsigned long long n,cnt=0;cin>>n;
        while(n>1)
        {
        if(n%6==0)
        n/=6;
        else
        n*=2;
        cnt++;
        }
        if(n==1)
        cout<<cnt<<endl;
        else
        cout<<"-1"<<endl;
    }
}
