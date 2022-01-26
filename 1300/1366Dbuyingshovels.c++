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
    ll n, k;
    cin >> n >> k;
    if (k >= n)
        cout << "1" << endl;
    else
    {
        vector<ll> v;
        ll mul = 1;
        for (int i = 1; i<=sqrt(n); i++)
        {
            if (n % i == 0)
                v.pb(i);
        }
        ll mx = INT_MIN;
        for (auto &it : v)
        {     if(it<=k)
              mx=max(it,mx);
              if(n/it<=k)
              mx=max(n/it,mx);
            
        }
        
        cout <<n/mx<< endl;
    }
}

int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
