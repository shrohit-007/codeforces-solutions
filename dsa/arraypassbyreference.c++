#include<bits/stdc++.h>
using namespace std;
void func(int *arr,int n)
{
   // int n=sizeof(arr)/sizeof(arr[0]);//here 'sizeof' on array function parameter 'arr' will return size of 'int*'
    arr[0]=100;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";//that is why it is just printing 1 element only;
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    func(arr, n);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}