#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define lld long double
#define in insert
using namespace std;
void solution()
{
    char ar[9][9];
    for(int i=0;i<9;i++)
    {
        string s;cin>>s;
        for(int j=0;j<9;j++)
        {
            ar[i][j]=s[j];
        }
    }
    int a=0,b=0;
    for(int i=0;i<3;i++)
    {
        b=i;
        for(int j=0;j<3;j++)
        {
            if(ar[a][b]=='9')
            ar[a][b]='1';
            else
            {
                char x=ar[a][b];
                ar[a][b]=x+1;
            }
            b+=3;
            a++;
        }
    }
    for(int i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            cout<<ar[i][j];
        }cout<<endl;
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}