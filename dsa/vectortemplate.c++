#include<bits/stdc++.h>
using namespace std;
template<typename T>// we have here initialized  a template = now we can make this vector of any type t which will be defined in main
class Vector{
    T *arr;
    int cs;
    int ms;
    public :
    Vector(int max_size=1){ 
        cs=0;
        ms=max_size;
        arr=new T[ms];// this will also of type T
    }
    void push_back(const T d)
    {
        if(cs==ms)
        {
            T *oldarr=arr;
            ms*=2;
            arr=new T[ms];
            for(int i=0;i<cs;i++)
            arr[i]=oldarr[i];// we are just copying the data ;
            delete []oldarr;//deletion of oldarray 
        }
        arr[cs]=d;
        cs++;
    }
    void pop_back()//we cant make it const as well bcoz it arr size is decreasing
    {
        if(cs>=0)
        cs--;
        // it will work as a popback because next time the new element will be pushed back in  its previous posistion so that element will be changed automatickly
    }
    bool isempty()const
    {
        return cs==0;//if Vector is empty then it will return true;
    }
    // now we will create method of front , back, at, size, capacity
    T front()const
    {
        return arr[0];
    }
    T back()const
    {
        return arr[cs-1];
    }
    T get(int i)const
    {
        return arr[i];
    }
    int size()const
    {
        return cs;
    }
    int capacity()
    {
        return ms;
    }
    T operator[](const int i)const// operator overloading whenever this operator will be called then it will return arr[i];
    {
        return arr[i];
    }
};
int main()
{
    Vector<char>v1;
    Vector<Vector<int>>v2;// we can have any type of data in Vecotr now due to our template class of typename T
    Vector<int> v;// here we have defined the data type of our own created data structures which is int we can make the Vector of any data type now
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.front()<<endl;
    cout<<v.get(2)<<endl;
    cout<<v.back()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}