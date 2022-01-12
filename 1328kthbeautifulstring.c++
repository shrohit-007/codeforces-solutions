#include<bits/stdc++.h>
#define ll long long
#define mond 1000000000+7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
void solution()
{
    ll n,k;cin>>n>>k;
    ll b1,b2,rem;
    float temp;
    temp=((sqrt(1+8*k)-1)/2)*1.0;
    b1=n-(ceil(temp) +1);
    temp=int(temp);
    rem=k-(temp*(temp+1)/2);
    if(rem==0)
    rem+=temp;
    b2=n-(rem);
    for(int i=0;i<n;i++)
    {
        if(i==b1 or i==b2)
        cout<<"b";
        else
        cout<<"a";
    }
    cout<<"\n";


}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while (t--)
    {
        solution();
    }
    
}