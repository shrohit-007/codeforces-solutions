#include <bits/stdc++.h>
#define ll long long
#define lld long long double
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
void solution()
{
    int n, l;
    cin >> n >> l;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll a;
        cin >> a;
        v.pb(a);
    }
    vector<int> num;
    ll res=0;
    for (int i = 0; i < l; i++)
    {
        int cnt0 = 0, cnt1 = 0;
        for (int j = 0; j < n; j++)
        {
            int k = v[j] & 1;
            v[j] = v[j]>>1;
          //  cout<<k<<" "<<v[j]<<" ";
            if(k==0)
            cnt0++;
            else
            cnt1++;
        }
      //  cout<<endl;
        if(cnt1>cnt0)
        {
            res+=pow(2,i);
        }
    
    }
    cout<<res<<endl;
}
int main()
{
    fios int t;
    cin >> t;
    while (t--)
        solution();
}
