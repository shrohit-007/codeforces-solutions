#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string s;cin>>s;
    ll sum=0;
    if(s.length()==1)
    cout<<"0"<<"\n";
    else{
    for(int i=0;i<s.size();i++)
    sum+=s[i]-'0';
    int cnt=1;
    while(sum>9)
    {
        ll sum1=sum;
        sum=0;
        while(sum1!=0)
        {
            int rem=sum1%10;
            sum+=rem;
            sum1/=10;
        }
        cnt++;
    }
    cout<<cnt;
    }
}