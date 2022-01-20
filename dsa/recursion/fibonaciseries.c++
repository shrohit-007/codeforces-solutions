#include<bits/stdc++.h>
using namespace std;
int fibonaci(int n)
{
    if(n==0 or n==1)
    return n;
    return fibonaci(n-1)+fibonaci(n-2);
}
int main()
{
    int n;cin>>n;
    cout<<fibonaci(n)<<endl;
}