#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
   ll n,k;cin>>n>>k;
   ll d,x;
   d=sqrt(8*n+9+8*k);
   x=((3+2*n)-d)/2;
   cout<<x;
}
/*
#include <iostream>
#include <cmath>
//binarysearch code;
int main() {
    long long n, k;
    std::cin >> n >> k;
    long long l = -1, r = n + 1;
    while (r - l > 1) {
        long long m = (l + r) / 2;
        if ((n - m) * (n - m + 1) / 2 - m > k)
            l = m;
        else
            r = m;
    }
    std::cout << r;
    return 0;
}*/