#include<bits/stdc++.h>
using namespace std;
int getbit(int n,int i)
{
    return ((1<<i)&n)>0?1:0;
}
int clearbit(int n,int i)
{
    return (~(1<<i))&n;
}
int setbit(int n,int i)
{
    return (1<<i)|n;
}
int main()
{
    int n;cin>>n;
    int i;cin>>i;
   // cout<<getbit(n,i);
  // cout<<clearbit(n,i);,clear the ith bit will simply subtract pow(2,i) if that bit is 1 if it is 0 than it will be same
    cout<<setbit(n,i);// set bit simply means that it will add pow(2,i) if that bit is 0  else will be same;
}
