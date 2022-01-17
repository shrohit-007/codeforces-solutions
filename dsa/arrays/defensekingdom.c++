#include<bits/stdc++.h>
using namespace std;
int defkin(int W, int H, vector<pair<int, int>> position)
{
    int n=position.size();
    vector<int>w,h;
    for(int i=0;i<n;i++)
    {
        w.push_back(position[i].second);
        h.push_back(position[i].first);
    }
    sort(w.begin(),w.end());
    sort(h.begin(),h.end());
    int max1=-1,max2=-1;
    for(int i=0;i<n-1;i++)
    {
        cout<<h[i+1]-h[i]-1<<" "<<w[i+1]-w[i]-1<<endl;
    }cout<<H-h[n-1]<<" "<<W-w[n-1]<<endl;
   /* for(int i=1;i<n-1;i++)
    {
        cout<<h[i+1]-h[i]-1<<" ";
        cout<<w[i+1]-w[i]-1<<endl;
       // max1=max(max1,h[i+1]-h[i]-1);

       // max2=max(max2,w[i+1]-w[i]-1);
    }*/
    max1=max(H-h[n-1],max1);
    max2=max(W-w[n-1],max2);
    return max1*max2;
}
int main()
{
    int h,w;cin>>h>>w;
    int n;cin>>n;
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        int a,b;cin>>a>>b;
        v.push_back({a,b});
    }
    cout<<defkin(h,w,v);
}

