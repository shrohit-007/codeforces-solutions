#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    for(int i=1;i<n;i++)
    {
        int curr=a[i];
        int prev=i-1;
        while(prev>=0 and a[prev]>curr)
        {
            a[prev+1]=a[prev];
            prev--;
        }
        a[prev+1]=curr;
    }
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

}