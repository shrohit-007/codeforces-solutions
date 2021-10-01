#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k;cin>>k;
    vector<int>v;
    for(int i=0;i<12;i++)
    {
        int a;cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end(),greater<int>());
    int sum=0,cnt=0;
    for(int i=0;i<12;i++)
    {   if(k==0)
        break;
        sum+=v[i];
        cnt++;
        if(sum>=k)
         break;
    }
    if(sum>=k)
    cout<<cnt<<endl;
    else
    cout<<"-1"<<endl;
}