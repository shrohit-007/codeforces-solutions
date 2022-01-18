#include<bits/stdc++.h>
using namespace std;
void clearbitsinrange(int &n,int i,int j)
{
    int a=~0<<(j+1);
    int b=(1<<i)-1;
    int mask=a|b;
    n=n&mask;
}
void replacebits(int &n,int i,int j,int m)
{   
    clearbitsinrange(n,i,j);
    m=m<<i;
    n=n|m;
}
int main()
{
    int n,m,i,j;cin>>n>>m>>i>>j;
    replacebits(n,i,j,m);
    cout<<n;

}
//mine
/*void replacebits(int &n,int m,int i, int j)
{
    int a=~0<<j-i+1;//firstly we have just made the half no. like 11111110000    i=1,j=5; then we will do or operation with m so it 
    int temp=a|m;//m digits will be added in last; ex m=1010 no. be like 11111111010 and now we have to add i 1's in last also 
    // firstly we have to increase temp range so that the 1's could be able to added in last;
    // so we will simple << i ;
    temp=temp<<i;
    // and now we will add i 1's into it 
    int b=1<<i-1;
    int mask=temp|b;
    n=n&temp;
}
int main()
{
    int n;cin>>n;
    int m;cin>>m;
    int i;cin>>i;
    int j;cin>>j;
    replacebits(n,m,i,j);
    cout<<n;

}*/