
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    int cnt1=0,cnt2=0,maxx1=0,maxx2=0,maxx=0;
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {   cnt2=0; 
            maxx1=0;
            cnt1++;
        }
        else
        {   
            maxx2=0;
            cnt1=0;
            cnt2++;
        }
        maxx1=max(maxx1,cnt1);
        maxx2=max(maxx2,cnt2);
        maxx=max(maxx,min(maxx1,maxx2));
        
    }
    cout<<2*maxx;
    return 0;
}