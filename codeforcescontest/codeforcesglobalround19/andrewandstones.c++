#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
    {
        int n;cin>>n;
        vector<ll>v;
        for(int i=0;i<n;i++)
        {
            ll a;cin>>a;
            v.pb(a);
            //cout<<a<<" ";
        }
        ll ans=0;
        if(v.size()==3 && v[1]%2!=0)
        cout<<"-1"<<endl;
        else
        {
            int cnt=0;
            for(int i=1;i<=n-2;i++)
            {
                if(v[i]==1)
                cnt++;
            }
            if(cnt==n-2)
            cout<<"-1"<<endl;
            else
            {  
                for(int i=1;i<=n-2;i++)
                {
                    if(v[i]%2!=0)
                    {
                        ans++;
                        ans+=(v[i]-1)/2;
                    }
                    else
                    ans+=v[i]/2;
                }
                cout<<ans<<endl;
            }
        }
        
    }

int main()
{
    fios int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}