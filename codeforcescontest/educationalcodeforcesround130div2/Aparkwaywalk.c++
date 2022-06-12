#include<bits/stdc++.h>
using namespace std;
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
bool cmps(const pair<int,int>&a,const pair<int,int>&b)
{
    if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
}
bool cmpfs(const pair<ll,ll>&a,const pair<ll,ll>&b)
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
void generator(ll sum,vector<ll>&vr)
{   
    if(sum==1)
    {
        return;
    }
    ll x=ceil(1.0*sum/2);
    ll y=floor(1.0*sum/2);
    //cout<<x<<" "<<y<<endl;
    vr.pb(ll(x));
    vr.pb(ll(y));
    generator(x,vr);
    generator(y,vr);
    
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
ll helper(ll &ans,string s,vector<ll> child[],ll i)
{
    ll bal=s[i-1]=='B'?-1:1;
    if(child[i].empty())
        return bal;
    for(auto x:child[i])
    {
        bal+=helper(ans,s,child,x);
    }
    if(bal==0)
        ans++;
    return bal;
}
const int N=200005;
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
void josephus(int i,vector<int>&v,int k)
{
    if(v.size()==1)
    {
        return;
    }
    i=(i+k)%v.size();
    v.erase(v.begin()+i);
    josephus(i,v,1);
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
void solution()
{
    int n,m;cin>>n>>m;
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(m>a)
        {
            m-=a;
        }
        else
        {
            ans+=a-m;
            m=0;
        }
    }
    cout<<ans<<endl;
}




   
int main()
{       init_code();
        int t;cin>>t;
        while(t--)
        solution();
    /*
    rohit shakya solution 
    user name : saitama_007
    */
        return 0;
}
