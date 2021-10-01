#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    multiset<int>s,s1;
    int temp=n;
    for(int i=0;i<m;i++)
    {
        int a;cin>>a;
        s.insert(a);
        s1.insert(a);
    }
    int resmax=0,resmin=0;
    while(n>0)
    {
        auto it=s.end();
        it--;
        resmax+=*it;
        if((*it)-1>0)
        { 
            s.insert(*it-1);
        }
        s.erase(it);
        n--;
    }
    while(temp>0)
    {
        auto it=s1.begin();
        resmin+=*it;
        if(*it-1>0)
        {
            s1.insert(*it-1);
        }
        s1.erase(it);
        temp--;
    }
    cout<<resmax<<" "<<resmin;

}