#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int i;
        map<int, int> v;
        if (x < 1 || x > 45)
            cout << "-1"<<endl;
        else
        {
            if (x >= 1 && x <= 9)
                cout << x << endl;
            else
            {
                for (i = 9; i >= 1; i--)
                {
                    x -= i;
                    v[i] = 1;
                    if (x >= 1 && x <= 9)
                    {
                        if (v.find(x) == v.end())
                        {
                            v[x] = 1;
                            break;
                        }
                    }
                }
                for (auto &it : v)
                {
                    cout << it.first;
                }
                cout << endl;
            }
        }
    }
}