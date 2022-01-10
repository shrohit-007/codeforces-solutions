#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
#define eb emplace_back
#define ppb pop_back
using namespace std;
void solution()
{
    ll a,b,c;cin>>a>>b>>c;
    lld m1,m2,m3;
    int cnt1=0,cnt2=0,cnt3=0;
    ll temp=-1;

    m1=((a+c)*1.0)/(2*b);
    if(m1==int(m1))
    cnt1++;
    m2=((2*b-c)*1.0)/a;
    if(m2==int(m2))
    cnt2++;
    m3=((2*b-a)*1.0)/c;
    if(m3==int(m3))
    cnt3++;

    if(cnt1==1)
    temp=int(m1);
    else if(cnt2==1)
    temp=int(m2);
    else if(cnt3==1)
    temp=int(m3);

    if((cnt1>0 or cnt2>0 or cnt3>0) && temp>=1)
    cout<<"YES"<<"\n";
    else
    cout<<"NO"<<"\n";
}   
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}