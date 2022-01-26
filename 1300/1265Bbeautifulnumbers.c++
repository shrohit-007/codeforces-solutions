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
void solution()
{
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=1;i<=n;i++)
    {
        int a;cin>>a;
        v.pb(mp(a,i));
    }
    sort(all(v));
    int posmx=INT_MIN,posmn=INT_MAX;
    string s="";
    for(int i=0;i<n;i++)
    {
        posmx=max(posmx,v[i].second);
        posmn=min(posmn,v[i].second);
        if(posmx-posmn+1==v[i].first)
        s+="1";
        else
        s+="0";
    }
    cout<<s<<endl;
}

int main(){

    fios
    int t;cin>>t;
    while(t--){
        solution();
    }

   return 0;
}

