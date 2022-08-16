//#pragma GCC optimize("O3,unroll-loops")
#include<bits/stdc++.h>
using namespace std;
using namespace chrono;
//in case of ordered set;
/*
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
 
using namespace std;
using namespace __gnu_pbds;
 
typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds; // find_by_order, order_of_key
*/
#define fio                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
#define rohit 1
#define MOD1 998244353
#define endl "\n"
#define ar array
#define inf 1e18
#define pb push_back
#define eb emplace_back
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
    _print(p.fc);
    cerr << ",";
    _print(p.sc);
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
bool cmppsf(const pair<ll,pair<ll,ll>>&a,const pair<ll,pair<ll,ll>>&b)
{
    if(a.second.first==b.second.first)
        return a.second.second>b.second.second;
    return a.second.first<b.second.first;
}
bool cmppss(const pair<int,pair<int,int>>&a,const pair<int,pair<int,int>>&b)
{
    if(a.second.first==b.second.first)
        return a.second.second<b.second.second;
    return a.second.first<b.second.first;
}
bool cmps(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.second==b.second)
        return a.first<b.first;
    return a.second<b.second;
    
}
bool cmpfs(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}
bool cmpf(const pair<ll,ll>&a,const pair<ll,ll>&b)
{
    if(a.first==b.first)
        return a.second>b.second;
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
int lis(vector<int>v,int n)//longest increasing subsequence
{
    vector<int>d;
   for(int i=0;i<n;i++)
    {
        auto it=lower_bound(d.begin(),d.end(),v[i]);
        if(it==d.end())
        {
            d.pb(v[i]);
        }
        else
        {
            *it=v[i];
        }
    }
    return d.size();
}
int modulo(int x,int mod1)
{
    return ((x%mod1)+mod1)%mod1;
}
int power(int x, int y, int mod1)
{
    // your code goes here
    long long ans=1;
    while(y>0)
    {
        int lsbt=(y&1);
        if(lsbt)
        {
            ans=(ans*x);
            ans=modulo(ans,mod1);
        }
        x=modulo(x,mod1);
        x*=modulo(x,mod1);
        y>>=1;
    }
    
    return ans;
}
vector<ll> smdiv(ll n)//prime factorization
{
    // if divisible by 2
    vector<ll>v;
    while(n%2==0)
    {
        v.pb(2);
        n/=2;
    }
 
    // iterate from 3 to sqrt(n)
    for (ll i = 3; i * i <= n; i += 2) {
       {
            while(n%i==0)
            {
                v.pb(i);
                n/=i;
            }
       }
    }
    if(n>2)
    v.pb(n);
    return v;
}
vector<ll> primesieve1(ll &a)
{
    vector<ll>v;
    ll prime[a]={0};
    for(int i=2;i<=a;i++)
    {
        for(int j=i*i;j<=a;j+=i)
        {
            if(prime[j]==0)
            prime[j]=1;
        }
    }
    for(int i=2;i<=a;i++)
    {
        if(prime[i]==0)
        v.pb(i);
    }
    return v;
}
vector<ll> primesieve(ll &b)
{
    vector<ll>v;
    ll prime[b]={0};
    for(int i=2;i<=b;i++)
    {
        for(int j=i*i;j<=b;j+=i)
        {
            if(prime[j]==0)
            prime[j]=1;
        }
    }
    for(int i=2;i<=b;i++)
    {
        if(prime[i]==0)
        v.pb(i);
    }
    return v;
}
ll gcd(ll a, ll b)
{
    // Everything divides 0
    if (a == 0)
       return b;
    if (b == 0)
       return a;
  
    // base case
    if (a == b)
        return a;
    // a is greater
    if (a > b)
        return gcd(a-b, b);
    return gcd(a, b-a);
}
bool cmppp(pair<ll,ll>a,pair<ll,ll>b)
{
    if(a.first-a.second==b.first-b.second)
        return a.first<b.first;
    return a.first-a.second<b.first-b.second;
}
bool checkprime(int a)
{
    if(a == 1) {
        return false;
    }
    for (int i = 2; i*i <= a; i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}
ll primeSum(ll a , ll b)
{
    ll sum = 0;
    for (ll i = b; i >= a; i--) {
 
        bool isprime = checkprime(i);
        if (isprime) {
            sum = sum + i;
        }
    }
    return sum;
}
int toint(string x){
    int res=0;
    for(int i=x.size()-1, t=1; i>=0; i--, t*=10) res+=(x[i]-48)*t;
    return res;
}
const int N=500005;
int fen[N];// for fenwick initialize with all the values to 0 first then update;
void update(int i, int add)
{
    while(i<N)
    {
        fen[i]+=add;
        i+=(i&(-i));
    }
}
int getsum(int i)// and sum for ranges is sum(r)-sum(l-1);
{
    int s=0;
    while(i>0)
    {
        s+=fen[i];
        i-=i&(-i);
    }
    return s;
}
ll modpower(int y,int n)
{
    ll res=1;
    ll x=y;
    while(n>0)
    {
        if(n%2==1)
        {
            res=(res%mod)*(x%mod);
            res%=mod;
        }
        n/=2;
        x*=(x%mod);
        x%=mod;
    }
    return res%mod;
}
vector<int>edges[N];
int sizes[N],parent[N];
bool visited[N];
int dfs(int u,int p,int v)
{
    sizes[u]=1;
    visited[u]=1;
    parent[u]=v;
    for(int i:edges[u])
    {
        if(i!=p and !visited[i])
        {
            sizes[u]+=dfs(i,u,v);
        }
    }
    return sizes[u];
}
void solution()
{
    int n,q;cin>>n>>q;
    map<int,pair<int,int>>m;
    vector<int>v;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        v.pb(a);
        if(i==1)
        {
            m[a]={1,0};
        }
        else
        {
            m[a]={i-1,0};
        }
    }
    int x=v[0];
    int y=v[1];
    int i=2;
    if(x<y)
    {
        m[x].sc=1;
        x=-1;
    }
    else
    {
        m[y].sc=1;
        y=-1;
    }
    int r=2;
    while(i<n)
    {
        if(x==-1)
        {
            x=v[i];
        }
        else
        {
            y=v[i];
        }
        if(x<y)
        {
            m[x].sc=r;
            x=-1;
        }
        else
        {
            m[y].sc=r;
            y=-1;
        }
        r++;
        i++;
    }
    if(x!=-1)
        m[x].sc=r;
    else
        m[y].sc=r;
    debug(m);
    for(int i=0;i<q;i++)
    {
        int a,b;cin>>a>>b;
        a--;
        a=v[a];
        int x=m[a].fc;
        int y=m[a].sc;
        int dif=y-x;
        if(dif==0)
        {
            cout<<0<<endl;
        }
        else if(b<x)
        {
            cout<<0<<endl;
        }
        else if(y==n)
        {
            cout<<b-x+1<<endl;
        }
        else if(b<y)
        {
            cout<<b-x+1<<endl;
        }
        else if(b==y)
        {
            cout<<b-x<<endl;
        }
        else if(b>y)
        {
            cout<<y-x<<endl;
        }
    }
}
   
int main()
{       init_code();
    auto st = high_resolution_clock::now();
    int t;cin>>t;
    while(t--)
    solution();
    auto en = high_resolution_clock::now();
    auto duration = duration_cast<microseconds>(en - st);

    cerr<<"Time :"<<duration.count()/1000<<"ms"<<endl;
    /*
    rohit shakya solution 
    user name : saitama_007
    */
        return 0;
}
