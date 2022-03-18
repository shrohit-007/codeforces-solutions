#include <bits/stdc++.h>
#define ll long long
#define mod 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
using namespace std;
void solution()
{
   ll n,m;cin>>n>>m;
   ll mx=n-m+1;
   mx=mx*(mx-1)/2;
   ll tmp=n/m;
   ll rem=n%m;
   ll mn;
   if(rem!=0)
    {
        ll x=(rem*(tmp*(tmp+1)/2));
        ll y=(m-rem)*(tmp*(tmp-1)/2);
        mn=x+y;
    }
   else
    mn=m*tmp*(tmp-1)/2;
   cout<<mn<<" "<<mx<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    /*int t;cin>>t;
    while(t--)*/
    solution();
    
}