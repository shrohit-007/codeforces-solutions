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
   ll a,b,c,d;
   cin>>a>>b>>c>>d;
   lld x=((b-a)*1.0/b)*((d-c)*1.0/d)*1.0;
   lld ans=(a*1.0/b)*(1*1.0/(1-x));
   cout<<setprecision(9)<<fixed<<ans<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    
}