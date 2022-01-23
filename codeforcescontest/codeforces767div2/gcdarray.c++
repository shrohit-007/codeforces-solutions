#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define ppb pop_back
#define in insert
#define all(s) s.begin(),s.end()
#define mod 1000000007
#define lld long double
#define vi vector<int>
#define spc " "
#define endl "\n"
#define fios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define repp(n)   for(int (i)=(0);(i)<(n);++i)
#define MAX 1000000000
using namespace std;
void solution( )
{
    ll l,r,k;
    cin>>l>>r>>k;
    ll od;
    if(l%2==0 and r%2==0)
    {
        od=(r-l)/2;
    }
    else if(l%2!=0 and r%2!=0)
    {
        od=(r-l)/2+1;
    }
    else
    od=(r-l+1)/2;
    if(l==r && r==1)
    cout<<"NO"<<endl;
    else if(l==r)
    {
        cout<<"YES"<<endl;
    }
    else if(k>=od)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
int main()
{
    fios
    int tt=1;
    cin>>tt;
    while(tt--)
    {
         solution();
    }
}
    