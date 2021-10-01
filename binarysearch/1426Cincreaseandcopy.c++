#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define mod 1000000000+7
using namespace std;
void solving()
{
    ll n;cin>>n;
    ll temp=(int(sqrt(4*n))-2)/2;
    cout<<(ceil(n*1.0/(temp+1))-1)+temp<<"\n";
}
int main()
{
    int t;cin>>t;
    while(t--)
    solving();
}