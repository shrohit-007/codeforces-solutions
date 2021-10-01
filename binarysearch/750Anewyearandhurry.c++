#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,k;cin>>n>>k;
    int total=k,cnt=0;
    for(int i=1;i<=n;i++)
    {   
        total+=5*i;
        if(total<=240)
        {
          cnt++;
        }  
        else
        break; 
    }
    cout<<cnt;
}