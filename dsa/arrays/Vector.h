class Vector{
    int *arr;//here  we are using the concept of dynamic array
    int cs;//this is for current size// these all are data members
    int ms;// we have made these variables private so no one can see these
    public :
    Vector(int max_size=1){// we can also accept max size from the user 
        cs=0;
        ms=max_size;
        arr=new int[ms];
    }
    void push_back(const int d)// we can't make this function const bcoz we are chaning arr size here so it will change data member but we can mae element of it as const
    {
        if(cs==ms)
        {
            // we have to create a array od double size which will point to a new address and we will double the size 
            int *oldarr=arr;
            ms*=2;
            arr=new int[ms];
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
    int front()const
    {
        return arr[0];
    }
    int back()const
    {
        return arr[cs-1];
    }
    int get(int i)const
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
    int operator[](const int i)const// operator overloading whenever this operator will be called then it will return arr[i];
    {
        return arr[i];
    }
};
