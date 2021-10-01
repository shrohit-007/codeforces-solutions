#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; //first odd or even is position;
        cin >> n;
        string k; cin>>k;
        int oddod = 0, evenev = 0;
        int rem;
        for (int i = 0; i <n; i++)
        {
            rem = int(k[i]) % 10;
            if (i % 2 != 0)
            {
                if (rem % 2 == 0)
                    evenev++;
            }
            else
            {
                if (rem % 2 != 0)
                    oddod++;
            }
        }
        if(n%2==0)
        {
            if(evenev!=0)
            cout<<"2"<<"\n";
            else
            cout<<"1"<<"\n";
        }
        else
        {
            if(oddod!=0)
            cout<<"1"<<"\n";
            else
            cout<<"2"<<"\n";
        }
    }
}