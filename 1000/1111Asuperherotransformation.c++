#include<bits/stdc++.h>
#define ll long long
#define mod 100000000+7
#define rep(n) for(int i=0;i<n;i++)
using namespace std;
int main()
{
    string s,t;
    cin>>s>>t;
    set<int>se={int('a'),int('e'),int('i'),int('o'),int('u')};
    int cnt=0,cnt1=0;
    for(int i=0;i<s.size();i++)
    {
        if(se.find(int(s[i]))==se.end() && se.find(int(t[i]))==se.end())
        cnt++;
        else if(se.find(int(s[i]))!=se.end() && se.find(int(t[i]))!=se.end())
        cnt1++;
    }
    if(s.size()!=t.size())
    cout<<"No"<<"\n";
    else if(cnt+cnt1==s.size())
    cout<<"Yes"<<"\n";
    else
    cout<<"No"<<"\n";
}