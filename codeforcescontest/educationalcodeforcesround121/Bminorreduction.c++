#include <bits/stdc++.h>
#define ll long long
#define lld long double
#define pb push_back
#define ppb pop_back
#define endl "\n"
#define spc " "
#define mod 1000000007
#define ul unsigned long long
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    string s;
    cin >> s;
    int n = s.length();
    int flag = 0;
    for (int i = n - 1; i >= 1; i--)
    {
        int a = int(s[i] - '0');
        int b = int(s[i - 1] - '0');
        if (a + b >= 10)
        {
            flag = 1;
            s.erase(s.begin() + i - 1);
            s.erase(s.begin() + i - 1);
            s.insert(i - 1, to_string(a + b));
            break;
        }
    }
    if (flag == 1)
        cout << s << endl;
    else
    {

        int c = int(s[0] - '0');
        int d = int(s[1] - '0');
        s.erase(s.begin());
        s.erase(s.begin());
        s.insert(0,to_string(c+d));
        cout<<s<<endl;
    }
}

int main()
{
    fios int t = 1;
    cin >> t;
    while (t--)
        solution();
}
