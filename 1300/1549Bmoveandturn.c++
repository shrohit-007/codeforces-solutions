#include<bits/stdc++.h>
#define ll long long
#define lld long long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
   ll n;cin>>n;
    if(!(n&1))
    {
        cout<<(n/2+1)*(n/2+1)<<endl;
    }
    else
    {
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(i&1)
            cnt++;
        }
        cout<<2*cnt*(cnt+1)<<endl;
    }
}
int main()
{
    fios int t=1;
    solution();
}
   