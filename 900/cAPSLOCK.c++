#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int cnt=0;
    for(int i=0;i<s.size();i++)
    {
        if(isupper(s[i]))
        cnt++;
    }
    if(cnt==s.size() || (islower(s[0]) && cnt==s.size()-1))
    {
        for(int i=0;i<s.size();i++)
        {
            if(isupper(s[i]))
            s[i]=tolower(s[i]);
            else if(islower(s[i]))
            s[i]=toupper(s[i]);
        }
    }
    cout<<s;


}