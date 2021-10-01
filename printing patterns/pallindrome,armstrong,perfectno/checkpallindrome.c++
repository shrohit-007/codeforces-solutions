#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the no. to be checked for pallindrome";
    cin>>n;
    int reversenum=0;
    int temp=n;

    while(temp!=0)
    {
        reversenum=reversenum*10+temp%10;
        temp=temp/10;
    }
    if(reversenum==n)
    cout<<" no. is pallindrome";
    else
    cout<<" no. is not pallindrome";
}