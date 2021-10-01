#include<bits/stdc++.h>
using namespace std; 
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        long long int a[n*k],sum=0;
        for(int i=0;i<n*k;i++)
        cin>>a[i];
        if(n%2!=0)
        {
            int c=0;
            int m=n/2+1;
            int y=n*k;
            while(c!=k)
            {
                sum+=a[y-m];
                y=y-m;
                c++;
            }
        }
        else
        {
            int c=0;
            int m=n/2;
            int y=n*k;
            while(c!=k)
            {
                sum+=a[y-m-1];
                y=y-m-1;
                c++;
            }
        }
        cout<<sum<<"\n";
    }
}