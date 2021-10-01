#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        map<int, int> m;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            m[a]++;
        }
        int count = 0, tmp;
        for (int i = 0; i <= 100; i++)
        {
            if (m[i] == 0)
            {
                tmp = i;
                break;
            }
        }
        for(int i=0;i<=100;i++)
        {
            if(m[i]>=2)
            {
                count++;
                continue;
            }
            else
            break;
        }
        cout << count+tmp << endl;
    }
}