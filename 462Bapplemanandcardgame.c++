#include <bits/stdc++.h>
#define ll long long
#define mod 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
using namespace std;
void solution()
{
   int n,k;cin>>n>>k;
   if(k>(n+1)/2)
   cout<<"-1"<<endl;
   else
   {
       for(int i=0;i<n;i++)
       {
           for(int j=0;j<n;j++)
           {
               if(i==j)
               {
                   if(i%2==0 && k>0)
                   { 
                    k--;
                    cout<<"R";
                   }
                   else
                   cout<<".";
               }
               else
               cout<<".";
           }
           cout<<"\n";
       }
   }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;cin>>t;
    while(t--)
    solution();
    
}