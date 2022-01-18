#include<bits/stdc++.h>
using namespace std;
void converttobinary(int n)
{
    long long res=0;
    long long multiplier=1;
    /// we are converting binary to decimal;
    while(n>0)
    {
        int last_bit = n&1;
        res+=multiplier*last_bit;
        multiplier*=10;
        n=n>>1;
    }
    cout<<res;
}
int main()
{
    int n;cin>>n;
    converttobinary(n);
}