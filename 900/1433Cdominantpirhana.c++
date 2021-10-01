#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<ll,vector<int>>m;
        vector<ll>v;
        vector<ll>v1;
        for(int i=1;i<=n;++i)
        {
            ll a;cin>>a;
            v.push_back(a);
            v1.push_back(a);
            m[a].push_back(i);
        }
        sort(v1.begin(),v1.end());
        ll tmp=v1.back();
        //v[n]=v1.back();
        int pos=0,chk;
        for(int i=0;i<m[tmp].size();i++)
        {
             chk=m[tmp][i];
             if(chk==1)
             {
                 if(v[chk-1]!=v[chk])
                 {
                     pos=chk;
                     break;
                 }
             }
            else if(v[chk-1]!=v[chk-2] || v[chk-1]!=v[chk])
             {pos=chk;
             break;}
        }
        if(m[tmp].size()==v.size())
        cout<<"-1"<<endl;
        else
        cout<<pos<<endl;
    
    }
}