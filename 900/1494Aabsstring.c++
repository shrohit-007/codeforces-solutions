#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define ull unsigned long long
#define pi 3.14
#define rep(i, n) for (int i = 0; i < n; i++)
#define in insert
using namespace std;
void solution()
{
    string s;
    cin>>s;int f=0;
    for(int i=0;i<8;i++)
    {
        int sum=0;
        for(int j=0;j<s.length();j++)
        {
            sum+=(i>>s[j]-'A')&1?1:-1;
            if(sum<0)
            {
                break;
            }
        }
        if(sum==0)
        {
            cout<<"YES"<<endl;
            f=1;
            break;
        }
    }if(!f)cout<<"NO"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}
