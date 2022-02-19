#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int n=s.length();
    int pos=-1,pos1=-1;
    long ans=0,res=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='[')
        {
            pos=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]==']')
        {
            pos1=i;
            break;
        }
    }
    if(pos1<pos or pos==-1 or pos1==-1)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        int cnt=0;
        for(int i=pos+1;i<pos1;i++)
        {
            if(s[i]==':')
            {
                cnt++;
                pos=i;
                break;
            }
        }
        for(int i=pos1-1;i>=pos+1;i--)
        {
            if(s[i]==':')
            {
                cnt++;
                pos1=i;
                break;
            }
        }
        if(pos==pos1 or cnt<2)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            for(int i=pos+1;i<pos1;i++)
            {
                if(s[i]=='|')
                ans++;
            }
            cout<<ans+4<<endl;
        }
    }
}