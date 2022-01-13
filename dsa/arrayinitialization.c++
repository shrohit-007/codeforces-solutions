#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10]={-1};//if we have initialize this array like this then it will not print garbage; and print 0;
    for(int i=0;i<5;i++)
    cin>>arr[i];
    for(int i=0;i<23;i++)
    cout<<arr[i]<<" ";
}
