#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";//in bubble sort simply every time the largest element is pushed to the right so we dont have to take that right element in our scope that's why we do 
    // j=0 to j=n-1-i;
}