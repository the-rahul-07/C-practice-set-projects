#include <stdio.h>

int main()
{
    int i = 0;
    printf("The value of i is %d\n", i);
    i = i + 5;
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", i++);
    printf("The value of i is %d\n", i);

    // i++ increment 1st then prints i (pre increment operator)
    // ++i print 1st and then increment i (post increment operator)
    return 0;
}