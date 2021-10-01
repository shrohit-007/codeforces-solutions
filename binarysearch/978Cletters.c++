#include<bits/stdc++.h>
#define ll long long
#define mod 1000000000+7
#define pb push_back
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    vector<ll>d;
    ll sum=0;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        sum+=a;
        d.pb(sum);
    }
    for(int i=0;i<m;i++)
    {
        ll b;cin>>b;
       /* for(int j=0;j<n;j++)
        {   it is not gonna work definitely
            if(b<=d[j])
            {
                if(j==0)
                cout<<"1"<<" "<<b<<"\n";
                else 
                {
                    cout<<j+1<<" "<<b-d[j-1]<<"\n";
                }
                break;
            }

        }
        */
        int l=0,r=n-1;
        while(r-l>=1)
        {
            ll mid=l+(r-l)/2;
            if(d[mid]<b)
            l=mid+1;
            else
            {
            r=mid;
            }
        }
        if(r==0)
        cout<<r+1<<" "<<b<<"\n";
        else
        cout<<r+1<<" "<<b-d[r-1]<<"\n";

    }
}