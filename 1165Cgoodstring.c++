#include<bits/stdc++.h>
#define ll long long
#define mond 1000000000+7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
void solution()
{
    int n;cin>>n;
    string s;cin>>s;
    string res="";
    res+=s[0];
    int i;
    for(i=0;i<n-1;i++)
    {
        if(s[i]==s[i+1])
        continue;
        else
        {
            res+=s[i+1];
            i++;
            if(res.length()==n)
            break;
            res+=s[i+1];
        }
    }
    int len=res.length();
    if(res.length()%2!=0)
    {
        res.erase(len-1);
    }
    len=res.length();
    cout<<n-len<<"\n";
    cout<<res<<"\n";
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
    
    
}