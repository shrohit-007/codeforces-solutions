#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.length();
        if(n%2!=0)
        cout<<"NO"<<"\n";
        else{
        if(s[0]==s[n-1])
        cout<<"NO"<<"\n";
        else
        {   
            char a=s[0],b=s[n-1];
            int cnt=0,cnt1=0;
            for(int i=0;i<n;i++)
            {
                 if(s[i]==a)
                 cnt++;
                 if(s[i]!=b)
                 cnt1++;
            }
            if(cnt==n/2)
            {   cnt=0;
                cnt1=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]==a)
                    cnt++;
                    else
                    cnt1++;
                    if(cnt<cnt1)
                    {
                        cout<<"NO"<<"\n";
                        break;
                    }
                }cout<<"YES"<<"\n";
            }
            else if(cnt1==n/2)
            {
                cnt=0;
                cnt1=0;
                for(int i=0;i<n;i++)
                {
                    if(s[i]!=b)
                    cnt1++;
                    else
                    cnt++;
                    if(cnt1<cnt)
                    {
                        cout<<"NO"<<"\n";
                    }

                }
                cout<<"YES"<<"\n";
            }
            else
            cout<<"NO"<<"\n";
        }
        }
    }
}