#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    vector<char> v(n);
    int temp = n;
    for (int i = 0; i < n; i++)
    {
        if (s.length()%2 == 0)
        {
            v[(s.length()/2) - 1]=s[0];//always assign values in case of vector for that value not to changed further;
            s.erase(0,1);
        }
        else
        {
            v[n-1-(s.length()/2)]=s[0];
            s.erase(0,1);
            
        }
    }
    for(int i=0;i<n;i++)
    cout<<v[i];
}