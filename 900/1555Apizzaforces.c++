#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        unsigned long long n,ans;cin>>n;
        if(n<=6)
        ans=15;
        else
       {
            ans=(n+1)/2*5;}
            
           // if(ans%5==0)
           // cout<<ans<<"\n";
          //  else
            cout<<(ans)<<"\n";

        
    
    }
}