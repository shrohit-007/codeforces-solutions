#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i]; 
    bitset<100000>bit;//we just have to make the size of bitset equal to sum of all the  numbers and + 1;
    //then if the sum of any subset (at this position ) if bit[x]=1;then the sum is present otherwise not
    // as we know 0th bit will be 0 because every subset has a 0 in it obviously
    bit[0]=1;
    for(int i=0;i<n;i++)
    {
        bit=bit|(bit<<i);
    }//and simply the or operation will mark all those subset 1 which is present in the array
    int q;cin>>q;
    for(int i=0;i<q;i++)
    {   
        int a;cin>>a;
        if(bit[a])
        cout<<"yes";
        else
        cout<<"No";
    }  
}