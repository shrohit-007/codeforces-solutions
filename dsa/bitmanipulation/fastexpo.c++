#include<bits/stdc++.h>
using namespace std;
int fastexpo(int a,int b)
{
    int res=1;
    while(b>0)
    {   
        int last_bit=(b&1);
        if(last_bit)
        {
            res*=a;
        }
        a=a*a;
        b=b>>1;
    }
    return res;
}
int main()
{
    int a,b;cin>>a>>b;
    cout<<fastexpo(a,b)<<endl;
}