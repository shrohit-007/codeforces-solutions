#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std;
void lowerBound1(vector<int> &A, int Val) 
{
    // your code goes here
    int n=A.size();
    int s=0,e=n-1;
    while(e-s>1)
    {
        int mid=s+(e-s)/2;
        if(A[mid]>Val)
        {
            e=mid-1;
        }
        else
        {
            s=mid;
        }
    }
    if(A[e]<=Val)
    cout<< A[e];
    if(A[s]<=Val)
    cout<<A[s];
}
int main()
{
    int n,k;cin>>n>>k;
    vector<int>A;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        A.pb(a);
    }
    lowerBound1(A,k);
}