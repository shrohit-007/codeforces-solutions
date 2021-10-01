#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,l,r;cin>>n>>l>>r;
    int minsum=n-l,maxsum=0;
    for(int i=0;i<l;i++)
    {
        minsum+=pow(2,i);
    }
    for(int j=0;j<r;j++)
    {
        maxsum+=pow(2,j);
    }
    maxsum+=(n-r)*pow(2,r-1);
    cout<<minsum<<" "<<maxsum;
}