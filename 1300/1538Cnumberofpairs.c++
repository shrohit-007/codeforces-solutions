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
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.pb(a);
    }
    sort(v.begin(), v.end());
    ll cnt=0;
    for(int i=0;i<n-1;i++)
    {
        auto it=upper_bound(v.begin()+i+1,v.end(),r-v[i]);
        auto it1=lower_bound(v.begin()+i+1,v.end(),l-v[i]);
        cnt+=(it-it1);
    }
    cout<<cnt<<endl;
}
int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
