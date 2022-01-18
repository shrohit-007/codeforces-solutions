#include<bits/stdc++.h>
using namespace std;
// you are at 0th step you have to defeat the enenmy which is n steps above you , and you making it easy you can take jumps in power of 2
// for ex enemy is at 7 and then you can jump lke 0---4----6--7 it will take 3 steps to defeat enemy you need to tell minimum steps to defeat enemy 

long long convertDecimalToBinary(unsigned long long int n)
{
    long long binaryNumber = 0;
    unsigned long long int remainder, i = 1, step = 1;

    while (n!=0)
    {
        remainder = n%2;
        n /= 2;
        binaryNumber += remainder*i;
        i *= 10;
    }
    return binaryNumber;
}

int earthLevel(int k)
{
    //your code goes here
    unsigned long long int binaryNumber, sum = 0;
    binaryNumber = convertDecimalToBinary(k);

    while (binaryNumber != 0)
    {
        unsigned long long int t;
        t = binaryNumber%2;
        sum = sum + t;
        binaryNumber = binaryNumber/10;
    }

    return sum;
} 