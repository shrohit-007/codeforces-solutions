#include<bits/stdc++.h>
using namespace std;
void clearbitsinrange(int &n, int i,int j)
{
    int a=~0<<(j+1);
    int b=1<<i-1;
    int mask=a|b;
    n=n&mask;
}
int main()
{
    int n;cin>>n;
    int i;cin>>i;
    int j;cin>>j;
    clearbitsinrange(n,i,j);
    cout<<n;
}