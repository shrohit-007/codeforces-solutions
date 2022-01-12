#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    vector<int>p(3);
    iota(p.begin(),p.end(),0);
    //iota is used to store the increasing numbers like p[0]=0,p[1]=1,p[2]=2;
    string colors="RGB";
    string res="";
    int ans=1e9;
    do{
        string t;
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            t+=colors[p[i%3]];
            if(t[i]!=s[i])
            cnt++;
        }
        if(ans>cnt)
        {
            ans=cnt;
            res=t;
        }
    }while(next_permutation(p.begin(),p.end()));
    //next_permutation is used to generating the next permutation like 123  in p then next is 132 ,213,231,312,321 and after condition it fails to produce next permuation and matches
    //with the initial permutation which is in this case is 123;
    cout<<ans<<endl<<res<<endl;
}