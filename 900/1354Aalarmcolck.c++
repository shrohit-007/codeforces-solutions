#include<bits/stdc++.h>
#define ll long long
using namespace std; 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll a,b,c,d;cin>>a>>b>>c>>d;
        ll time=b;
        double x,y,ratio;
        if(b>=a)
        cout<<b<<endl;
        else
        {
            if(c>d)
           {x=a-b;
            y=c-d;
            ratio=ceil(x/y);
            time+=c*(ratio);
            cout<<time<<endl;
           }
           else
           cout<<"-1"<<endl;
            
        }

    }
}