#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, count = 0, sum = 0;
        cin >> n;
        string s;
        cin >> s;
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] % 2 == 0)
            {
                count++;
                s.erase(i, 1);
            }
            else
                break;
        }
        for (int i = 0; i < s.length(); i++)
        {
            sum += s[i];
        }
        int temp = sum;
        if (count == n)
            cout << "-1"
                 << "\n";
        else
        {
            if (sum % 2 == 0)
                cout << s << "\n";
            else
            {
                for (int i = s.length() - 2; i >= 0; i--)
                {
                    if (s[i] % 2 != 0)
                    {
                        s.erase(i, 1);
                        sum -= int(s[i]);
                        cout << s << "\n";
                        break;
                    }
                }
                if (sum == temp)
                    cout << "-1"
                         << "\n";
            }
        }
    }
}