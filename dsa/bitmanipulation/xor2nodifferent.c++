#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    int res=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        res^=arr[i];
    }
    int pos=0;
    while(true)
    {
        int last_bit=res&1;
        if(last_bit)
        break;
        pos++;
        res=res>>1;
    }
    int res1=0;
    for(int i=0;i<n;i++)
    {
        int temp=(arr[i]<<pos)&1;
        if(temp)
        res1^=arr[i];
    }
    res^=res1;
    cout<<res<<" "<<res1;
    
    
}