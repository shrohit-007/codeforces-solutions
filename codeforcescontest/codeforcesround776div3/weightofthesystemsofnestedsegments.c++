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
bool cmp(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b)
{
    return a.second.first<b.second.first;
}

void solution()
{
    int n,m;cin>>n>>m;
    vector<pair<int,pair<int,int>>>v;
    vector<pair<int,int>>v1;
    for(int i=0;i<m;i++)
    {
        int x,w;cin>>x>>w;
        v.pb({i+1,{w,x}});
    }
    sort(v.begin(),v.end(),cmp);
    vector<pair<int,int>>v2;
    ll sum=0;
    for(int i=0;i<2*n;i++)
    {
        sum+=v[i].second.first;
        v2.pb({v[i].second.second,v[i].first});
    }
    sort(v2.begin(),v2.end());
    cout<<sum<<endl;
    for(int i=0,j=2*n-1;i<n;j--,i++)
    {
        cout<<v2[i].second<<" "<<v2[j].second<<endl;
       
    }

}   

int main()
{
    init_code();
    int t;cin>>t;
    while(t--)
        solution();
}