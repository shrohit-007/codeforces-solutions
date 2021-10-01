#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;cin>>n;
    string s;cin>>s;
    int j=0;
    while((j+1)!=n && n!=0)
    {
        if(s[j]=='0' && s[j+1]=='1')
        {
            s.erase(s.begin()+j);
            s.erase(s.begin()+j);
            if(j>0)
            j--;
            n-=2;
        }
        else if(s[j]=='1' && s[j+1]=='0')
        {
            s.erase(s.begin()+j);
            s.erase(s.begin()+j); 
            if(j>0)
            j--;
            n-=2;
        }
        else
        j++;
    }
    cout<<n;
}