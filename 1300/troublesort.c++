#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
void solution()
{
    int n;cin>>n;
    int zer=0,one=0;
    vector<int>v,v1;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.pb(a);
    }
    for(int i=0;i<n;i++)
    {
        int b;cin>>b;
        if(b==0)
        zer=1;
        else
        one=1;
    }
    v1=v;
    sort(v.begin(),v.end());
    if(zer && one)
    cout<<"YES"<<endl;
    else
    {
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(v[i]!=v1[i])
            {
                cnt=1;
                break;
            }
        }
        if(cnt)
        cout<<"NO"<<endl;
        else
        cout<<"YES"<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t=1;
    cin>>t;
    while(t--)
    {
        solution();
    }
}
