#include<bits/stdc++.h>
using namespace std;
vector<int>p(1000000);
vector<long long> primeseive()
{    
     //seive of erasthothenos;
     for(int i=2;i<=sqrt(p.size());i++)
     {
         if(p[i]==0)
         {  
             for(int j=i*i;j<=p.size();j+=i)
             {
                 p[j]=1;
             }
         }
     }
    vector<long long>v;
   for(int i=2;i<p.size();i++)
   {
       if(p[i]==0)
       v.push_back(i);
   }
   return v;
}
int main()
{   int t;cin>>t; 
    vector<long long>v=primeseive();
    while(t--)
    {
        int d;cin>>d;
    
   auto it=lower_bound(v.begin(),v.end(),d+1)-v.begin();
   auto it1=lower_bound(v.begin(),v.end(),v[it]+d)-v.begin();
   cout<<v[it]*v[it1];
   cout<<"\n";
    }
}