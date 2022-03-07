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
vector<ll> calc(ll n)
{
    vector<ll> a;
    while (n % 2 == 0)
    {
        a.pb(2);
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2)
    {
        while (n % i == 0)
        {
            a.pb(i);
            n /= i;
        }
    }
    if (n > 2)
        a.pb(n);
    return a;
}
void solution()
{
    ll n;
    cin >> n;
    vector<ll> v;
    v = calc(n);
    int pos = 0;
    int pos1 = -1;
    pair<int, int> st;
    ll mx = INT_MIN;
    int i;
    for ( i = 0; i < v.size() - 1; i++)
    {
        //cout << v[i] << " ";
        if(v[i+1]%v[i]==0)
        {
            continue;
        }
        else
        {
            pos1=i;
            if(mx<abs(pos-pos1))
            {
                mx=abs(pos-pos1);
                st.first=pos;
                st.second=pos1;
            }
            pos=i+1;
        }
    }pos1=i;
    if (mx < abs(pos - pos1))
    {
        mx = abs(pos - pos1);
        st.first = pos;
        st.second = pos1;
    }
    //cout << st.first << " " << st.second << endl;
    ll sum=1;
    for(int i=0;i<st.first;i++)
    {
        sum*=v[i];
    }
    for(int i=st.second;i<v.size();i++)
    {
        sum*=v[i];
    }
    cout<<st.second-st.first+1<<endl;
    for(int i=st.first;i<st.second;i++)
    cout<<v[i]<<" ";
    cout<<sum<<endl;
}
int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
