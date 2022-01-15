#include <bits/stdc++.h>
#define ll long long
#define lld long double
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
void solution()
{
    int n, m;
    cin >> n >> m;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
             v.push_back(max(i, n - i - 1) + max(j, m - j - 1));
        }
    }sort(v.begin(),v.end());
    for(int i=0;i<n*m;i++)
    cout<<v[i]<<" ";
    cout<<endl;
}
int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
