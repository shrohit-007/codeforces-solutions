#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
using namespace std;
void solution()
{
    int n,m;cin>>n>>m;
    vector<int>a(n);
    vector<int>b(m);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<m;i++)
    cin>>b[i];
    sort(a.begin(),a.end());
    //sort(b.begin(),b.end());
    for(int i=0;i<m;i++)
    {
        auto it=upper_bound(a.begin(),a.end(),b[i]);
        cout<<it-a.begin()<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}