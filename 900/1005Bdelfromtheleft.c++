#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;cin>>s>>t;
    int count=0,i=s.length()-1,j=t.length()-1;
    while(true)
    {  
        if(s[i]==t[j])
        {
            count++;
             i--;
             j--;
             if(i<0 || j<0)
             break;

        }
        else
        break;
    }
    cout<<s.length()+t.length()-2*count;
}