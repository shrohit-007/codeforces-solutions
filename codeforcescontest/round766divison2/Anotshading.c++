#include<bits/stdc++.h>
#define ll long long
#define lld  long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define fios ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
using namespace std;
void solution()
{
    int n,m,r,c;cin>>n>>m>>r>>c;
    char str[n][m];
    int flag1=0,flag=0,flag3=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>str[i][j];
            if(str[i][j]=='B')
            flag1=1;
            if(i==r-1 && j==c-1)
            {
                if(str[i][j]=='B')
                flag3=1;
            }
         //   cout<<str[i][j]<<" ";
        }
    }
    for(int i=r-1;i<=r-1;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(str[i][j]=='B')
            flag=1;
        }
    }
    for(int i=c-1;i<=c-1;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(str[j][i]=='B')
            flag=1;
        }
    }
 //   cout<<flag1<<" "<<flag<<" "<<flag3<<endl;
    if(flag3==1)
    {
        cout<<"0"<<endl;
    }
    else
    {
        if(flag==1)
        {
            cout<<"1"<<endl;
        }
        else if(flag1==1)
        {
            cout<<"2"<<endl;
        }
        else
        cout<<"-1"<<endl;
    }

}
int main()
{
    fios int t=1;
    cin>>t;
    while(t--)
    solution();
}
   
