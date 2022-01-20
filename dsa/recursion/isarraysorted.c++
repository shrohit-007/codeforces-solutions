#include<bits/stdc++.h>
using namespace std;
bool is_sorted(int a[], int n)
{
    if(n==1)
    return true;
    if(a[0]<a[1] and is_sorted(a+1,n-1))//here we are giving the base address +1 of the element 
    return true;
    return false;
}
// for those who are just conusing after seeing the above method which is based upon array addressing 
// but here we include we have to compare it for a[i] and a[i+1]
bool is_sortedtwo(int a[],int i,int n)
{
    if(i==n-1)
    {
        return true;
    }
    if(a[i]<a[i+1] and is_sortedtwo(a,i+1,n))
    return true;
    return false;
}
int main()
{
    int n;cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<is_sortedtwo(a,0,n)<<endl;
}