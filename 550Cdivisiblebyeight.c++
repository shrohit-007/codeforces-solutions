#include <bits/stdc++.h>
#define ll long long
#define mond 1000000000 + 7
#define pb push_back
#define pi 3.14
#define in insert
using namespace std;
string s;
int main()
{
    cin >> s;
    s = "00" + s;
    int n = s.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                int a = (s[i] - '0') * 100 + (s[j] - '0') * 10 + (s[k] - '0');
                if (a % 8 == 0)
                {
                    cout << "YES\n"
                         << a;
                    return 0;
                }
            }
        }
    }
    cout << "NO";
}
