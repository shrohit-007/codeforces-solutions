#include <iostream>
using namespace std;
int main()
{
    int i, j, r;
    cout << " enter the no. of rows:";
    cin >> r;
    for (i = 1; i <= r / 2; i++)
    {
        for (j = 1; j <= i; j++)
            cout << "" << j;
        for (j = i; j > 1; j--)
            cout << "" << j - 1;
        cout << endl;
    }
    for (i = 1; i <= r / 2; i++)
    {
        for (j = 0; j <= r / 2 - i; j++)
            cout << "" << j + 1;
        for (j = r / 2 - i; j >= 1; j--)
            cout << j;
        cout << endl;
    }
}