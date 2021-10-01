#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        string s;cin>>s;
        int count=0;
        for(int i=0;i<n/2;i++)
        {   if(i!=(n-1-i))
           {
            if(s[i]==s[n-1-i])
            count++;
            else
            break;
            }
        } 
        if(k==0)//never equate any variable to any no. or anything just by single quating sign otherwise it wil assigned to it and condition will become true;
        {
            cout<<"YES"<<"\n";
            continue;
        }
        if(k==n/2 && n%2==0)
        {
            cout<<"NO"<<"\n";
            continue;
        }
        if(count>=k && s.length()>=2*count)
        cout<<"YES"<<"\n";
        else
        cout<<"NO"<<"\n";
    }
}