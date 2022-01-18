#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    long long res=0;
    for(int i=0;i<32;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]&1)
            count++;
            arr[j]>>=1;
        }
        res+=pow(2,i)*(count%3);
    }
    cout<<res;
}