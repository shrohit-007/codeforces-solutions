#include <bits/stdc++.h>
#define ll long long
#define lld long long double
#define in insert
#define pb push_back
#define mod 1000000000 + 7
#define pi 3.14
#define fios                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
void solution()
{
    ll x1, y1, x2, y2, x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    if ((y1 == y2 and y3 < y1) or (y1 == y3 and y2 < y1) or (y2 == y3 and y1 < y2))
    {
        if (y1 == y2)
            cout << abs(x1-x2) << endl;
        else if (y2 == y3)
            cout << abs(x2-x3) << endl;
        else
            cout << abs(x1-x3) << endl;
    }
    else
    {
        cout<<"0"<<endl;
    }
}
int main()
{
    fios int t;
    cin >> t;
    while (t--)
    {
        solution();
    }
}
