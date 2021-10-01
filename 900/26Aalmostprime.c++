#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int fcnt=0;
    vector<int>v;
    for(int i=0;i<3000;i++)
    {   int cnt=0;
        for(int j=2;j<=i;j++)
           if(i%j==0)
           cnt++;
        if(cnt==1)
        v.push_back(i);
    }
    for(int i=1;i<=n;i++)
    {
        int cnt1=0;
        for(int j=0;j<v.size();j++)
        {if(i%v[j]==0)
        cnt1++;
        if(cnt1>2)
        break;
        }
        if(cnt1==2)
        fcnt++;
    }
    cout<<fcnt;
}