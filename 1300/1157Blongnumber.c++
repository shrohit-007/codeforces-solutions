#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
void solution()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<int>v,num;
    for (int i = 1; i <=9; i++)
    {
        int a;cin>>a;
        num.pb(a);
    }   
    for (int i = 0; i < n; i++)
    {
        v.pb(int(s[i]-'0'));
        
    }
    int flag=0;
    for (int i = 0; i <n; i++)
    {
        //cout << v[i] << " ";
        if (v[i] <= num[v[i]-1])
        {
            if(v[i]<num[v[i]-1])
            {
                //cout<<v[i]<<" "<<num[v[i]-1]<<" ";
                flag=1;
                v[i]=num[v[i]-1];
            }
            else
            v[i]=num[v[i]-1];
        }
        else
        {
            if(flag==1)
            break;
        }
    }
    for (auto &it : v)
        cout << it;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    solution();
}
