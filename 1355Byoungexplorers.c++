 #include<bits/stdc++.h>
 #define ll long long
 #define lld long long double
 #define in insert
 #define pb push_back
 #define mod 1000000000+7
 #define pi 3.14
 using namespace std;
 void solution()
 {
     int n;cin>>n;
     map<int,int>m;
     for(int i=0;i<n;i++)
     {
         int a;cin>>a;
         m[a]++;
     }
     ll res=0,rem=0,cnt;
     for(auto &it:m)
     {
         res+=(it.second+rem)/it.first;
         rem=(it.second+rem)%it.first;
     }
     cout<<res<<"\n";
 }
 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    solution();
 }