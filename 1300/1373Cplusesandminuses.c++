#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
using namespace std;
void solution()
{
    string s;cin>>s;
    int n=s.length();
    vector<int>v;
    int j=0;
    int curr=0;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='-')
        {
            curr--;
        }
        else
        {
            curr++;
        }
        //curr+=j;
        if(curr<0)
        {
            v.pb(i+1);
            curr++;
            //j=1;
        }
       //cout<<curr<<" ";
    }//cout<<endl;
    ll sum=n;
    for(int i:v)
    sum+=i;
    cout<<sum<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solution();
}