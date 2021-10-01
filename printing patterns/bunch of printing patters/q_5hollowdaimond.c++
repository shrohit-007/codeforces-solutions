#include <iostream>
using namespace std;
int main()
{
    int i, j, r;
    cout << "enter the no. of rows:";
    cin >> r;
    for (i = 1; i <= r / 2; i++)
    {
        for (j = 1; j <= r / 2 - i; j++)
            cout << " ";
       
        for (j = 1; j <= i; j++)
       { if(j==1 || j==i)
            cout << "* ";
            else 
            cout<<"  ";}
         cout << endl;
    }
    for (i = 1; i <= r / 2; i++)
    {
        for (j = 1; j < i; j++)
            cout << " ";
        for (j = 0; j <= (r/2-i); j++)
        if(j==0 || j==r/2-i )
            cout << "* ";
            else 
            cout<<"  ";
        cout << endl;
    }
    return 0;
}
