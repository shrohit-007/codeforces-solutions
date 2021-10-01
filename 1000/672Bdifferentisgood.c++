#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    set<char>se;
    if(s.length()>26)
    cout<<"-1"<<"\n";
    else
    {
       for(int i=0;i<n;i++)
       se.insert(s[i]);
       cout<<n-se.size()<<"\n";
    }
    
}