#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
using namespace std;
void solution()
{
    int n, i, a[105], b[105], c[105], k = 0;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
    {
        cin >> b[i];
        if (!b[i])
            c[k++] = a[i];
    }
    sort(c, c + k);
    k--;
    for (i = 0; i < n; i++)
    {
        int j;
        if (b[i])
            cout << a[i] << " ";
        else
            cout << c[k--] << " ";
    }
    cout << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solution();
}