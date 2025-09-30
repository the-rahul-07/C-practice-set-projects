#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter n : ");
    scanf("%d", &n);
    int sum = 0;
    while (i <= n)
    {
        sum = sum + i;
        i++;
    }
    printf("Sum of 1st n natural number is %d\n", sum);
    return 0;
}