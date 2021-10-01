#include <iostream>
using namespace std;
int main() // hollow rectangle pattern
{
    int i, j, r, c;
    cout << "enter the no. of rows" << endl;
    cin >> r;
    cout << "enter the no. of columns" << endl;
    cin >> c;
    for (i = 0; i < r; i++)
    {

        for (j = 0; j < c; j++)
        {
            if (i == 0 || i == r - 1 || j == 0 || j == c - 1)
                cout << "*";
            else
            {
                cout << " ";
            }
        }

        cout << endl;
    }
    return 0;
}