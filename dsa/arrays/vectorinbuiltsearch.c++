#include<bits/stdc++.h>
using namespace std;
int main()
{
    int key;
    cin>>key;
    vector<int>v={1,2,3,5,4,6,8,55,66,33,11,0};
    // we can use inbuilt search which is find function to search for a particular index and simply we will just give the range where we need to search 
    // that element and it will return iterator pointing to the address of that particular element 
    // if we want the index of that particular searched element that simply we can just substract the base address from the it(iterator);
    vector<int>:: iterator it=find(v.begin(),v.end(),key);
    cout<<it-v.begin();// we are printing the index of that key element it is most important for cp purpose 


}
