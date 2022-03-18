#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define ull unsigned long long
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
vector<ll> calc(ll n)
{
    vector<ll> a;
    while (n % 2 == 0)
    {
        a.pb(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            a.pb(i);
            n /= i;
        }
    }
    if (n > 2)
        a.pb(n);
    return a;
}
void solution()
{
   ull a,b,n,m;cin>>a>>b>>n>>m;
   if(a+b<n+m)
   {
       cout<<"NO"<<endl;
       return;
   }
   if(a>b)
   {
       if(m<=b)
       {cout<<"YES"<<endl;
       return;}
   }
   if(a==b)
   {
       if(m<=a)
       {
           cout<<"YES"<<endl;
           return;
       }
   }
   if(a<b)
   {
       if(m<=a)
       {
           cout<<"YES"<<endl;
           return;
       }
   }
   cout<<"NO"<<endl;
}
int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
