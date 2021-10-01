#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int i=0,cnt=1;
    while(n!=i)
    {i=(cnt*(cnt+1)/2);
     cout<<s[i-1];
     cnt++;
    }

}