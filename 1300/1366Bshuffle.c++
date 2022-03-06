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
void solution()
{
    int n,x,m;cin>>n>>x>>m;
    int l=-1,r=-1,flag=0;
    for(int i=0;i<m;i++)
    {
        int a,b;cin>>a>>b;
        if(!flag)
        {
            if(x>=a && b>=x)
            {
                l=a,r=b;
                flag=1;
            }
        }
        else
        {
            if(l>=a and b>=l or a<=r and b>=r)
            {
                l=min(l,a);
                r=max(r,b);
            }
        }
    }
    cout<<r-l+1<<endl;
    
}
int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
