#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
void solution()
{
    int n,m;cin>>n>>m;
    if(n>=m)
    {
        cout<<n-m<<endl;
        return;
    }
    int cnt=0;
    while(n<m)
    {
        if(m%2==1)
        {
            m++;
            cnt++;
        }
        m=m/2;
        cnt++;
    }
    cnt+=(n-m);
    cout<<cnt<<endl;    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
