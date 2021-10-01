#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int cnt = 0;
        vector<pair<pair<int, int>, pair<int, int>>> v;
        for (int i = 0; i < n; i++)
        {
            int a, b, c, d;
            cin >> a >> b >> c >> d;
            v.push_back({{a, b}, {c, d}});
            if (b==c)
            cnt++;
        }
         if (m % 2 == 0)
        {
            if (cnt > 0)
                cout << "YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
        else
            cout << "NO"<<"\n";
    }
}