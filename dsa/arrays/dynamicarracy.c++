#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int *arr=new int[n];
    //here the array is created in system or heap memory and will be deleted only when we delete it by using delete command 
    for(int i=0;i<n;i++)
    {
        arr[i]=i;
        cout<<arr[i]<<" ";
    }
    delete []arr;// here the array from system memory is deleted so no memory leaks problems
    cout<<arr<<" ";//printing the hex address of that array which is holded by this *arr pointer variable
    return 0;// here we are removing the variable created in stack memory ;
}
