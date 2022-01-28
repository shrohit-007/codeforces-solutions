#include<bits/stdc++.h>
using namespace std;
#define fio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
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

typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;
// typedef tree<pair<int, int>, null_type, less<pair<int, int>>, rb_tree_tag, tree_order_statistics_node_update > pbds; // find_by_order, order_of_key
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.ff); cerr << ","; _print(p.ss); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}
void init_code()
{
    fio
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
 }
    void solution()
    {
        int n,k;cin>>n>>k;
        if(k==3 && n==4)
            cout<<"-1"<<endl;
        else if(k!=n-1)
        {   
            for(int i=1;i<n/2;i++)
            {
                if(i==k or i==n-1-k)
                {
                    continue;
                }
                cout<<i<<" "<<n-1-i<<endl;
            }
            if(k!=0)
            cout<<"0"<<" "<<n-1-k<<endl;
            cout<<k<<" "<<n-1<<endl;
        }
        else
        {
            int tmp1=n;
            n=tmp1;
            unordered_set<int>s;
            cout<<"0"<<" "<<"1"<<endl;
            cout<<n-1<<" "<<n-2<<endl;
            cout<<n/2<<" "<<n/2-2<<endl;
            cout<<n/2-1<<" "<<n/2+1<<endl;
            for(int i=2;i<tmp1/2;i++)
            {
                if(i==n/2 or i==n/2-1 or i==n/2+1 or i==n/2-2)
                    continue;
                cout<<i<<" "<<tmp1-i-1<<endl;
            }

        }
    }

    int main() {
        init_code();
        int tt = 1;
        cin >> tt;
        while (tt--)
        {
            solution();
        }
    }
