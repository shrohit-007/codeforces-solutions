#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    int s=0,e=n-1;
    while(s<e)
    {
        swap(arr[s],arr[e]);
        s+=1;
        e-=1;
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
