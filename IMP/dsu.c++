#include<bits/stdc++.h>
using namespace std;
class disjoint{
    vector<int>rank,size,par;
public:
    disjoint(int n)
    {
        rank.resize(n+1,0);
        par.resize(n+1);
        for(int i=0;i<=n;i++)
        {
            par[i]=i;
        }
        size.resize(n+1,1);
    }
    int findpar(int v)
    {
        if(v==par[v])
        {
            return v;
        }
        return par[v]=findpar(par[v]);
    }
    void unionbyrank(int u,int v)
    {
        int pu=findpar(u);
        int pv=findpar(v);
        if(pu==pv)return;
        if(rank[pu]<rank[pv])
        {
            par[pu]=pv;
        }
        else if(rank[pv]<rank[pu])
        {
            par[pv]=pu;
        }
        else
        {
            par[pv]=pu;
            rank[pu]++;
        }
    }
    void unionbysize(int u,int v)
    {
        int pu=findpar(u);
        int pv=findpar(v);
        if(pu==pv)return;
        if(rank[pu]<rank[pv])
        {
            par[pu]=pv;
            size[pv]+=size[pu];
        }
        else
        {
            par[pv]=pu;
            size[pu]+=size[pv];
        }
    }
};
int main()
{}
