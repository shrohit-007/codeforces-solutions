#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,key;cin>>n>>key;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    sort(arr,arr+n);
    int l=0,r=n-1;
    int res=-1;
    while(l<=r)
    {
        int mid=(r+l)/2;
        if(arr[mid]==key)
        {
            res=mid;
            break;
        }
        else if(arr[mid]>key)
        r=mid-1;
        else
        l=mid+1;
    }
    if(res!=-1)cout<<res<<"found";
    else
    cout<<"not found";
}