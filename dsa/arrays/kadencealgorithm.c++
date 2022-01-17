#include<bits/stdc++.h>
using namespace std;
int maxSumSubarray(vector<int> A) {
    int cn=0,maxn=INT_MIN;
    for(int i=0;i<A.size();i++){
        if(A[i]<0)
        cn++;
        if(maxn<A[i])
        maxn=A[i];
    }
    if(cn==A.size())
    return maxn;
    else
    {
        int sum=0,cs=0;
        for(int i=0;i<A.size();i++)
        {
            cs+=A[i];
            if(cs<A[i])
            cs=A[i];
            sum=max(sum,cs);
        }
        return sum;
    }
}
int main()
{
    int n;cin>>n;
    vector<int>A;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        A.push_back(a);
    }
    cout<<maxSumSubarray(A);
}
