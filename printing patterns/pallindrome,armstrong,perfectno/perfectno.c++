#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout<<"enter no. to be checked for perfect number. ";
    cin>>num;
    int sum=0;
    for(int i=1;i<num;i++)
    {
        if(num%i==0)
        sum+=i;
    }
    if(sum==num)
    cout<<"it is a perfect number";
    else
    cout<<"it is not a perfect number";

}