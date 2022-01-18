#include <iostream>
using namespace std;
int modulo(int x,int mod)
{
    return ((x%mod)+mod)%mod;
}
 
 
int power(int x, int y, int mod)
{
    // your code goes here
    long long ans=1;
    while(y>0)
    {
        int lsbt=(y&1);
        if(lsbt)
        {
            ans=(ans*x);
            ans=modulo(ans,mod);
        }
        x=modulo(x,mod);
        x*=modulo(x,mod);
        y>>=1;
    }
    
    return ans;
}
int main()
{
    int a,b,mod;cin>>a>>b>>mod;
    cout<<power(a,b,mod);
}