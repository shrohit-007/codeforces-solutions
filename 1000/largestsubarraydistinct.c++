 #include<bits/stdc++.h>
 using namespace std;
 int main()
 {
     int n;cin>>n;
     vector<int>v;
     for(int i=0;i<n;i++)
     {
         int b;cin>>b;
         v.push_back(b);
     }
     int i=0,j=0;
     int cnt[100000]={0};
     cnt[v[0]]++;
     int ans=1;
     while(j!=n-1)
     {
         if(cnt[v[j+1]]==0)
         {
             j++;
             cnt[v[j]]=1;
             ans=max(ans,j-i+1);
         }
         else
         {
             cnt[v[i]]--;
             i++;
         }
     }
     cout<<ans<<endl;
 }