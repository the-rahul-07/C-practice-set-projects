#include <stdio.h>

int main()
{
    // EXPLAIN STEP EVALUTION OF 3*x/y-z+k
    int x = 2, y = 3, z = 3, k = 1;
    int a = 3 * x / y - z + k;
    /*
    3*x/y-z+k
    6/y-z+k
    2-z+k
    -1+k
    0
    */
    printf("value of 3*x/y-z+k is %d", 3 * x / y - z + k);
    return 0;
}