#include<bits/stdc++.h>
#define ll long long
#define pb push_back
using namespace std; 
int main()
{
    int n;cin>>n;
    vector<ll>v;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        v.pb(a);
    }
    cout<<ceil(1.0*n/2)-1<<"\n";
    sort(v.begin(),v.end());
    auto it=v.end()-1;
    auto it1=v.begin();
    int cnt=0;
    while(true)
    {

         if(it==it1)
        {
            cout<<*it;
            break;
        }
        cout<<*it<<" "<<*it1<<" ";
        cnt+=2;
        it--;
        it1++;
        if(it1>it)
        break;
    
    }
}