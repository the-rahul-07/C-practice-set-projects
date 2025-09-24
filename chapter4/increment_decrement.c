#include <stdio.h>

int main()
{
    int i = 0;
    printf("The value of i is %d\n", i);
    i = i + 5;                             // 5
    printf("The value of i is %d\n", i);   // 5
    printf("The value of i is %d\n", i++); // 5
    printf("The value of i is %d\n", i);   // 6

    // i++ print i 1st and then increment i (post increment operator)
    // ++i increment i 1st then prints i (pre increment operator)

    i += 2; // same as i = i + 2;
    printf("The value of i is %d\n", i);
    i += 3; // same as i = i + 3;
    printf("The value of i is %d\n", i);
    return 0;
}