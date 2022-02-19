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
    int n;
    cin >> n;
    vector<int>v(n),v1(n),b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int d=0;
    for (int i = 0; i < n; i++)
    {
        int pos1=0;
        int mx1=0;
        for (int j = 0; j < n; j++)
        {
            if (!v1[j] && __gcd(d, v[j]) > mx1)
            {
                mx1 = __gcd(d, v[j]);
                pos1 = j;
            }
        }
        v1[pos1] = 1;
        d = mx1;
        b[i]=v[pos1];
    }
    for(int i:b)
     cout<<i<<" ";
     cout<<endl;
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