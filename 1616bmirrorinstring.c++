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
    if(n==1)
    {
        cout<<s<<s<<endl;

    }
    else{
    string res = "";
    res += s[0];
    if (s[0] > s[1])
    {
        res += s[1];
        for (int i = 1; i < n - 1; i++)
        {
            if (s[i] >= s[i + 1])
                res += s[i + 1];
            else
                break;
        }
    }
    int len = res.length();
    for (int i = 0; i < 2 * len; i++)
    {
        if (i < len)
        {
            cout << res[i];
        }
        else
            cout << res[2 * len - 1 - i];
    }
    cout << endl;
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