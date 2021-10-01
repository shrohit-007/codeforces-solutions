#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    int maxx = 0, count = 0, maxx2 = 0, maxx1 = 0;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        if (a == 1)
        {
            count++;
            maxx = max(count, maxx);
            continue;
        }
        else
        {
            count = 0;
        }
    }
    for (int j = n - 1; j >= 0; j--)
    {
        if (v[j] == 1)
        {
            maxx2++;
        }
        else
            break;
    }
    for (int j = 0; j < n; j++)
    {
        if (v[j] == 1)
        {
            maxx1++;
        }
        else
            break;
    }
    if (maxx2 + maxx1 > maxx)
        cout << maxx2 + maxx1;
    else
    {
        if (v[0] == 1 && maxx2 >= maxx)
        {
            if (maxx2 >= maxx)
                cout << maxx2 + 1;
        }
        else if (v[n - 1] == 1 && maxx1 >= maxx)
        {
            if (maxx1 >= maxx)
                cout << maxx1 + 1;
        }
        else
            cout << maxx;
    }
}