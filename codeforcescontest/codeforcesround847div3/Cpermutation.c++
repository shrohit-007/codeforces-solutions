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
ll fact(ll n,ll mod1)
{
    if (n == 1)
        return 1;
    return (fact(n - 1,mod1) * n)%mod1;
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
// tutoient function for fi(p^x)=p^(x-1)*(p-1) where p is some prime value is the nubmer which are coprime with p^x
// for equation ax+by=gcd(a,b); v[0] will give x and v[1] will give y and v[2] will give gcd(a,b);
void gcd2(ll a, ll b, vector<ll>&v) {if (b == 0) {v[0] = 1; v[1] = 0; v[2] = a; return ;} gcd2(b, a % b, v); ll x = v[1]; v[1] = v[0] - v[1] * (a / b); v[0] = x; return;} //pass an arry of size1 3
ll modinverse(ll x,ll m)
{
    vector<ll>v(3,1);
    gcd2(x,m,v);
    return v[0];
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
vector<int> smdiv(int n)//
{
    set<int>v;
    for (int i = 1; i <= sqrt(n); i++) {
       {
            if(n%i==0)
            {
                v.in(i);
                v.in(n/i);
            }
       }
    }
    vector<int>v1;
    for(auto &it:v)
    {
        v1.pb(it);
    }
    return v1;
}
vector<ll> primefactorization(ll n)
{
    vector<ll>v1;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            v1.pb(i);
            while(n%i==0)
            {
                n/=i;
            }
        }
    }
    if(n>1)
        v1.pb(n);
    return v1;
}
vector<ll> primesieve(ll &b)// complexity (n/2+n/3+n/5+n/7+....) approx(order(n));(nlog(logn))
{
    vector<ll>v;
    ll prime[b]={0};
    for(int i=2;i*i<=b;i++)
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
const int N=100005;
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
ll modpower(int y,int n,ll m1)
{
    ll res=1;
    ll x=y;
    while(n>0)
    {
        if(n%2==1)
        {
            res=(res%m1)*(x%m1);
            res%=m1;
        }
        n/=2;
        x*=(x%m1);
        x%=m1;
    }
    return res%m1;
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
ll c[1010][1010];
void ncrpascal(int n,int r)
{
    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<=min(i,r);j++)
        {
            if(j==0 or j==i)
                c[i][j]=1;
            else
                c[i][j]=(c[i-1][j-1]+c[i-1][j])%mod;
        }
    }
}
int lcsrecursive(string &a,string &b,string ans,int i,int j)
{
    if(i==a.length() or j==b.length())
    {
        cout<<ans<<endl;
        return 0;
    }
    else if(a[i]==b[j])
    {
        return 1+lcsrecursive(a,b,ans+a[i],i+1,j+1);
    }
    else
    {
        return max(lcsrecursive(a,b,ans,i+1,j),lcsrecursive(a,b,ans,i,j+1));
    }
} 

vector<int> lps(string t)
{
    int n=t.length();
    vector<int>pf(n+1,0);
    int j=pf[0];
    for(int i=1;i<n;i++)
    {
        j=pf[i-1];
        while(j>0 and t[j]!=t[i])
        {
            j=pf[j-1];
        }
        if(t[j]==t[i])
            j++;
        pf[i]=j;
    }
    return pf;
}
void solution()
{
    int n;cin>>n;
    vector<vector<int>>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        vector<int>temp;
        for(int j=0;j<n-1;j++)
        {   
            int a;cin>>a;
            if(j==0)
            {
                m[a]++;
            }
            temp.pb(a);
        }
        v.pb(temp);
    }
    int x=0;
    for(auto &it:m)
    {
        if(it.sc==n-1)
            x=it.fc;
    }
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if(v[i][0]!=x)
        {
            pos=i;
            break;
        }
    }
    cout<<x<<" ";
    for(int i=0;i<n-1;i++)
    {
        cout<<v[pos][i]<<" ";
    }cout<<endl;


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
