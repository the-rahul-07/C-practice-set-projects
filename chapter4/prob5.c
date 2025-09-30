#include <stdio.h>

int main()
{
    /*Write a program to calculate the sum of the numbers occurring in the
    multiplication table of 8. (consider 8 x 1 to 8 x 10)*/

    int n, sum = 0;
    printf("8 Table:\n\n");
    for (int i = 1; i <= 10; i++)
    {
        printf("8 X %d = %d\n", i, 8 * i);
        sum += (8 * i); // sum = sum + (8 * i);
    }
    printf("\nSum of numbers occurring in 8 Table = %d\n", sum);
    return 0;
}