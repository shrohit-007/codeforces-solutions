#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define pb push_back
#define all(a) a.begin(),a.end()
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define ul unsigned long long
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    string s;cin>>s;
    sort(all(s));
    cout<<s<<endl;
  
}

int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
