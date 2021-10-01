#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number to be checked for armstrong ";
    cin>>n;
    int sum=0,rem;
    int temp=n;
    while(temp!=0)
    {
        rem=temp%10;
        sum+=rem*rem*rem;
        temp/=10;
    }
    if(sum==n)
    cout<<"it is armstrong number";
    else
    cout<<"it is not a armstrong number";
}