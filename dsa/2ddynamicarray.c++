#include<bits/stdc++.h>
#define ll long long
#define endl "\n"
using namespace std;
int **create2darray(int rows,int cols)
{
    int **arr=new int *[rows];//we are just creating a variable arr which will hold the address of a array which will be stroging all the address of rows
    for(int i=0;i<rows;i++)
    {
        arr[i]=new int[cols];
    }// 2d dynamic array creation part is done here now we have just to assign the values
    
    int value=0;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            arr[i][j]=value;
            value++;
        }
    }
    return arr;
}
int main()
{
    int rows,cols;
    cin>>rows>>cols;
    int **arr=create2darray(rows,cols);
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
}