#include<bits/stdc++.h>
using namespace std;
int compress(vector<char>& chars) {
    // your code goes here
        unordered_map<char,int>m;
        int len=chars.size();
        string res="";
        for(int i=0;i<len;i++)
        {
            m[chars[i]]++;
        }
        for(auto &it:m)
        {
          res+=it.first;
          res+=char(it.second-'0');
        }
        int len1=res.length();
        return min(len1,len);
        
}
int main()
{
    int n;cin>>n;
    vector<char>v;
    for(int i=0;i<n;i++)
    {
        char a;cin>>a;
        v.push_back(a);
    }
    cout<<compress(v);

}
