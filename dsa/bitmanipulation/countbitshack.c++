#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0;
    while(n>0)
    {
        n=n&(n-1);//removing the last set bit in one iteration;
        cnt++;
    }
    cout<<cnt;
}