#include<bits/stdc++.h>
using namespace std;
void countbits(int &n)
{
    int count=0;
    while(n>0)
    {
        count+=(n&1);
        n=n>>1;
    }
    cout<<count;
}
int main()
{
    int n;cin>>n;
    countbits(n);
}