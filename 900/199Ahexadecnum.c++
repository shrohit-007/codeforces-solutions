#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;cin>>n;
    long long n1=0,n2=1,n3;
    vector<long long int>v;
    v.push_back(n1);
    v.push_back(n2);
    for(int i=2;i<50;i++)
    {
        n3=n1+n2;
        v.push_back(n3);
        n1=n2;
        n2=n3;
    }
    if(n==0)
    cout<<"0"<<" "<<"0"<<" "<<"0";
    else if(n==1)
    cout<<"0"<<" "<<"0"<<" "<<"1";
    else if(n==2)
    cout<<"0"<<" "<<"1"<<" "<<"1";
    else
    {
        auto it=find(v.begin(),v.end(),n);
        it--;
        auto it1=it;
        auto it2=it-2;
        auto it3=it-3;
        cout<<*(it3)<<" "<<*(it2)<<" "<<*(it1)<<endl;



    }
}