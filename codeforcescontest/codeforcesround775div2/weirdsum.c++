#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define MOD1 998244353
#define inf 1e18
#define endl "\n"
#define pb push_back
#define ppb pop_back
#define mod 1000000007
#define mp make_pair
#define in insert
#define fc first
#define sc second
#define pi 3.141592653589793238462
#define set_bits __builtin_popcountll
#define sz(x) ((int)(x).size())
#define all(x) (x).begin(), (x).end()
#define rp(i, a, n) for (int i = (a); i < (n); i++)
typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
#ifndef ONLINE_JUDGE
#define debug(x)       \
    cerr << #x << " "; \
    _print(x);         \
    cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
    cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
    cerr << "{";
    _print(p.ff);
    cerr << ",";
    _print(p.ss);
    cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(set<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
    cerr << "[ ";
    for (T i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
    cerr << "[ ";
    for (auto i : v)
    {
        _print(i);
        cerr << " ";
    }
    cerr << "]";
}
void init_code()
{
    fio
#ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}
ll fact(ll n)
{
    if (n == 1)
        return 1;
    return fact(n - 1) * n;
}

void solution()
{
    int n, m;
    cin >> n >> m;
    map<int,vector<ll>>x;
    map<int,vector<ll>>y;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ll c;cin>>c;
            x[c].pb(i);
            y[c].pb(j);
        }
    }
    ll ans=0;
    for(auto &it:x)
    {
        sort(all(it.second));
        ll size=it.second.size();
        vector<ll>ssum(size+1,0);
        for(int i=size-1;i>=0;i--)
        {
            ssum[i]=ssum[i+1]+it.second[i];
        }
        for(int i=0;i<size-1;i++)
        {
            ans+=(ssum[i+1]-(size-1-i)*it.second[i]);
        }
    }
    for(auto &it:y)
    {
        sort(all(it.second));
        ll size=it.second.size();
        vector<ll>ssum(size+1,0);
        for(int i=size-1;i>=0;i--)
        {
            ssum[i]=ssum[i+1]+it.second[i];
        }
        for(int i=0;i<size-1;i++)
        {
            ans+=(ssum[i+1]-(size-1-i)*it.second[i]);
        }
    }cout<<ans<<endl;
}

int main()
{
    init_code();
    solution();
}