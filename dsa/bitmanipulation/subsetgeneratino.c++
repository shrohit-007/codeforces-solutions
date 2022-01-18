#include<bits/stdc++.h>
#define ll long long
#define lld long double
#define pb push_back
#define ppb pop_back
#define spc " "
#define endl "\n"
using namespace std;
void solution()
{
    int n;cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        v.pb(a);
    }
    for(int i=0;i<1<<n;i++)
    {
        int temp=i;
        for(int j=0;j<i;j++)
        {
            int it=temp&1;
            temp>>=1;
            if(it)
            cout<<v[j]<<" ";
        }cout<<endl;
    }// 1-for generating the subsets which are not duplicates we can simply take map<int,vector<int>> we it will select unique of all the generating subsets
    // 2-for just finding sum of subsets which are giving maximim xor value so we can just generate all the subsets and every time we generate subset
    /// we will take xor of all the elements and store the maximum value or also we can just print the subset having maximum xor
}
int main(){
    solution();
}