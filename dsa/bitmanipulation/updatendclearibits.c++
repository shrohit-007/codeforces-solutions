#include<bits/stdc++.h>
using namespace std;
int clearibits(int n,int i)
{
    int mask = (-1)<<i;
    return n|mask;
}
int  clearbit(int n,int i)
{
    return  ~(1<<i)&n;
}
int update(int n,int i, int d)
{
     n=clearbit(n,i);
     int mask= d<<i;
     return mask|n;
}
int main()
{
    int n;cin>>n;
    int i;cin>>i;
    int d;cin>>d;
    cout<<clearibits(n,i);
    
}