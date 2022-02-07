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
    ll a, b;
    cin >> a >> b;
    string s;
    cin >> s;
    int n = s.length();
    int beg=-1,end=-1;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='1')
        {
            beg=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        {
            end=i;
            break;
        }
    }
    if(beg==end and beg==-1)
    cout<<"0"<<endl;
    else
    {
        ll ans=a;
        for(int i=beg;i<=end;i++)
        {
            int cnt=0;
            while(s[i]=='0')
            {
                i++;
                cnt++;
            }
            ans+=min(a,b*cnt);
        }    cout<<ans<<endl;

    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}