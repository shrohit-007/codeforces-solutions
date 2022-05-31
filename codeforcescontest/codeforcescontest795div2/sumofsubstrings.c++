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
#define inf 1e18
#define endl "\n"
#define ar array
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
int lis(vector<int>v,int n)
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
vector<ll> smdiv(ll n)
{
    // if divisible by 2
    vector<ll>v;
    while(n%2==0)
    {
        v.pb(2);
        n/=2;
    }
 
    // iterate from 3 to sqrt(n)
    for (int i = 3; i * i <= n; i += 2) {
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
int ans=0;
void dfs(int root, vector<int>*edges,int parent,int f)
{
    if(f==0 and edges[root].size()==2)
    {
        f=1;
        ans+=1;
        for(int i:edges[root])
        {
            if(i!=parent)
                dfs(i,edges,root,f);
        }
    }
    else if(edges[root].size()>2)
    {
        ans+=1;
        f=0;
        for(int i:edges[root])
        {
            if(i!=parent)
                dfs(i,edges,root,f);
        }
    }
    else
    {
        for(int i:edges[root])
        {
            if(i!=parent)
                dfs(i,edges,root,f);
        }
    }
}
void solution()
{ 
    int n,k;cin>>n>>k;
    string s;cin>>s;
    vector<int>one,zero;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
            one.pb(i);
        else
            zero.pb(i);
    }
    int f=0;
    if(s[n-1]=='0')
    {
        if(!one.empty())
        {
            int pos=one.back();
            int d=n-1-pos;
            if(k-d>=0)
            {
                s[pos]='0';
                s[n-1]='1';
                k-=d;
                one.pop_back();
            }
        }
    }
    else
    {
        one.pop_back();
    }
    if(s[0]=='0')
    {
        if(!one.empty())
        {
            int pos=one[0];
            int d=pos;
            if(k-d>=0)
            {
                s[pos]='0';
                s[0]='1';
            }
        }
    }
    ll sum=0;
    //cout<<s<<endl;
    for(int i=0;i<n-1;i++)
    {
        if(s[i]=='0' and s[i+1]=='1')
            sum+=1;
        else if(s[i]=='1' and s[i+1]=='0')
            sum+=10;
        else if(s[i]=='1' and s[i+1]=='1')
            sum+=11;
    }
    cout<<sum<<endl;
    


    
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
}
