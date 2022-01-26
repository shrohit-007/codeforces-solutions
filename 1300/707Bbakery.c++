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
#define mp make_pair
#define fios ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define repp(n)   for(int (i)=(0);(i)<(n);++i)
using namespace std;
bool cmp(pair<pair<ll,ll>,ll>a1,pair<pair<ll,ll>,ll>b1)
{
        return a1.second<b1.second;
}
void solution()
{
    int n,m,k;
    cin>>n>>m>>k;
    vector<pair<pair<ll,ll>,ll>> v1;
    map<pair<ll,ll>,ll>m2;
    unordered_map<int,int>m1;

    for(int i=0;i<m;i++)
    {
        ll u,v,l;
        cin>>u>>v>>l;
        v1.pb({{u,v},l});
    }
    sort(all(v1),cmp);
    for(int i=0;i<k;i++)
    {
        ll s;cin>>s;
        m1.in({s,0});
    }
    ll ans=0,cnt=0;
    for(auto &it1:v1)
    {
        ll temp=it1.first.first;
        ll temp2=it1.first.second;
        if(m1.find(temp)!=m1.end() && m1.find(temp2)==m1.end())
        {
            ans=it1.second;
            break;
        }
        else if(m1.find(temp)==m1.end() && m1.find(temp2)!=m1.end())
        {
            ans=it1.second;
            break;
        }
    }
    if(ans!=0)
    cout<<ans<<endl;
    else
    cout<<"-1"<<endl;

}

int main(){

    fios
    solution();
    

   return 0;
}

