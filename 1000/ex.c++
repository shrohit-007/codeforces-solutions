#include<bits/stdc++.h> 
using namespace std;
string cnt(string s)
{   vector<char>v;
    string k;
    for(int i=0;i<s.length();i++)
    v[s[i]]++;
    for(int i=0;i<v.size();i++)
    {
        while(v[s[i]]!=0)
        k+=s[i];
    }
    return s;
}
 
bool arePermutation(string A, string B)
{
    string x=cnt(A);
    string y=cnt(B);
    if(x==y)
    return true;
    return false;
}
int main()
{
    string A="abscd";
    string B="abcsd";
    if(arePermutation(A,B))
    cout<<"true";
    else
    cout<<"false";
}