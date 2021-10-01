#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    map<pair<char,char>,int> v;
    for(int i=0;i<n-1;i++)
    {
        v[{s[i],s[i+1]}]++;
    }
    int maxx=0;
    for(int i=0;i<n-1;i++)
    {
       maxx=max(maxx,v[{s[i],s[i+1]}]);
    }
    for(auto &it:v)
    {
        if(it.second==maxx)
        {
            cout<<it.first.first<<it.first.second<<endl;
            break;
        }
    }
    
}