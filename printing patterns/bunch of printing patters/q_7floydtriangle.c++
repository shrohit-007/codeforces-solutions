#include <iostream>
using namespace std;
int main()
{
    int i, j,k=1, r;
    cout << "enter the no. of rows:";
    cin >> r;
    for (i = 1; i <= r; i++)
    {
        for (j = 1; j <= i; j++)
            cout <<" "<<k++;
        cout << endl;
    }
    return 0;
}