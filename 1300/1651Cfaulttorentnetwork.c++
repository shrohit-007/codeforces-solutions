#include <bits/stdc++.h>
using namespace std;
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rohit 1
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
bool cmppsf(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b)
{
    return a.second.first<b.second.first;
}
bool cmppss(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b)
{
    return a.second.second<b.second.second;
}
bool cmps(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.second<b.second;
}
bool cmpf(const pair<int,int>&a,const pair<int,int>&b)
{
    return a.first<b.first;
}
void rotatel(vector<ll>&v,int k)
{
    int n=v.size();
    vector<ll>b(n);
    for(int i=0;i<n;i++)
    {
        if(i-k<0)
        {
            b[(i-k)%n+n]=v[i];
        }
        else
            b[(i-k)%n]=v[i];
    }
    v=b;
}
void solution()
{

    int n;cin>>n;
    vector<ll>v(n),v1(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>v1[i];
    }
    ll ans=LLONG_MAX,ans2=LLONG_MAX;
    ll num1=abs(v[0]-v1[0])+abs(v1[n-1]-v[n-1]);
    ans=min(num1,ans);
    ans2=min(abs(v[0]-v1[n-1])+abs(v1[0]-v[n-1]),ans2);
    ans=min(ans,ans2);
    //cout<<ans<<endl;
    ll mn=LLONG_MAX;
    ll ans1=LLONG_MAX;
    ll mn1=LLONG_MAX,c=LLONG_MAX,d=LLONG_MAX,e=LLONG_MAX,f=LLONG_MAX,g=LLONG_MAX,h=LLONG_MAX;
    ll s=LLONG_MAX,j=LLONG_MAX,k=LLONG_MAX,l=LLONG_MAX,ans3=LLONG_MAX,ans4=LLONG_MAX,ans5=LLONG_MAX;
    for(int i=0;i<n;i++)
    {
        e=min(e,abs(v[i]-v1[n-1]));
        f=min(f,abs(v1[i]-v[n-1]));
        ans1=min(ans1,abs(v[0]-v1[0])+e+f);
        g=min(g,abs(v[i]-v1[0]));
        h=min(h,abs(v1[i]-v[0]));
        ans3=min(ans3,abs(v[n-1]-v1[n-1])+g+h);
        k=min(k,abs(v[i]-v1[n-1]));
        l=min(l,abs(v1[i]-v[0]));
        ans4=min(ans4,abs(v[n-1]-v1[0])+k+l);
        s=min(s,abs(v[i]-v1[0]));
        j=min(j,abs(v1[i]-v[n-1]));
        ans5=min(ans5,abs(v[0]-v1[n-1])+s+j);
        mn=min(mn,abs(v[0]-v1[i]));
        mn1=min(mn1,abs(v[n-1]-v1[i]));
        c=min(c,abs(v1[0]-v[i]));
        d=min(d,abs(v1[n-1]-v[i]));
    }
    //ans=min(ans,ans1);
    ans=min(ans,mn+mn1+c+d);
    //cout<<ans1<<" "<<ans3<<" "<<ans4<<" "<<ans5<<endl;
    ans=min(ans,ans1);
    ans=min(ans,ans3);
    ans=min(ans,ans4);
    ans=min(ans,ans5);
    cout<<ans<<endl;

}   
int main()
{
    fio
    int tt;cin>>tt;
    while(tt--)
        solution();
}