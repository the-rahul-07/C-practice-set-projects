#include <stdio.h>

int main()
{
    /*
    AND TABLE
    1 AND 1 = 1
    1 AND 0 = 0
    0 AND 0 = 0

    OR TABLE
    1 OR 1 = 1
    1 OR 0 = 1
    0 OR 0 = 0
    */
    int a = 1, b = 0;
    printf("The value of a is %d and The value of b is %d\n", a, b);
    printf("The value of a AND b is %d\n", a && b);
    printf("The value of a OR b is %d\n", a || b);
    printf("The value of not(a) is %d\n", !a);
    printf("The value of not(b) is %d\n", !b);
    return 0;
}