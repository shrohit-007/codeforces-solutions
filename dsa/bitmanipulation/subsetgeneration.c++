#include <iostream>
#include <math.h>
using namespace std;
 
class gfg
{
     
public:
void printPowerSet(char *set, int set_size)
{
    /*set_size of power set of a set with set_size
    n is (2**n -1)*/
    unsigned int pow_set_size = pow(2, set_size);
    int counter, j;
 
    /*Run from counter 000..0 to 111..1*/
    for(counter = 0; counter < pow_set_size; counter++)
    {//here the size of bitset will be equal to the number of elements in it
    // and we are checking in every bit from 0th to size-1 th bit if it is 1 then we will include that position element 
    // of array its simple ;
    for(j = 0; j < set_size; j++)
    {
        /* Check if jth bit in the counter is set
            If set then print jth element from set */
        if(counter & (1 << j))
            cout << set[j];
    }
    cout << endl;
    }
}
};
 
/*Driver code*/
int main()
{
    gfg g;
    char set[] = {'a','b','c'};
    g.printPowerSet(set, 3);
    return 0;
}
 
// This code is contributed by SoM15242