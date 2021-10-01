#include<bits/stdc++.h>
#define ll long long
#define mod 1000000000+7
#define pb push_back
#define fast  ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std; 
void solve()
{
    ll x;cin>>x;
    ll l=1,r=int(cbrt(x));
    int temp=0;
    while(l<=r)
    {
        if((l*l*l + r*r*r)==x)
        {temp=1;
        break;}
        else if((l*l*l + r*r*r)>x)
        r--;
        else
        l++;
    }
    if(temp)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    solve();
}
