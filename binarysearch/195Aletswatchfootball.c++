#include<bits/stdc++.h>
#define  ll long long
#define pb push_back
#define mod 1000000000+7
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std; 
void solve()
{
    int a,b,c;cin>>a>>b>>c;
    if(b>=a)
    cout<<"0";
    else
    cout<<ceil((a*c-b*c)*1.0/b);
}
int main()
{
    solve();
}