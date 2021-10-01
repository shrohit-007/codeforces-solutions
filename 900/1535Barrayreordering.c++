#include<bits/stdc++.h>
using namespace std;
int gcd(int x,int y)
{
    if(y==0)
    return x;
    else
    return gcd(y,x%y);
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        vector<int>v,even,odd;
        for(int i=0;i<n;i++)
        {
            int a;cin>>a;
            if(a%2==0)
            even.push_back(a);
            else
            odd.push_back(a);
        }
        for(auto &i :even)
        v.push_back(i);
        for(auto &j :odd)
        v.push_back(j);
        for(int i=0;i<n;i++)
        {  
            for(int j=i+1;j<n;j++)
            {
                if(i<j)
                {   
                    if(gcd(v[i],2*v[j])>1)
                    cnt++;
                }
            }
        }
        cout<<cnt<<endl;

    }
}