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
    string s;cin>>s;
    string res="";
    int max1=INT_MIN,min1=INT_MAX,max0=INT_MIN,min0=INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(s[i]=='0')
        {
            min0=min(min0,i);
            max0=max(max0,i);
        }
        else
        {
            min1=min(min1,i);
            max1=max(max1,i);
        }
    }
    if((min1>=0 && max1>=0) &&(min0>=0 && max0>=0))
    {
    if(min1<min0)
    s.erase(s.begin(),s.begin()+max0);
    else if(min1<max0)
    s.erase(s.begin()+min1,s.begin()+max0);
    }
    cout<<s<<"\n";
 }
 int main()
 {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin>>t;
    while(t--)
    solution();
 }