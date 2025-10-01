#include <stdio.h>

int main()
{
    int n, fac = 1, i = 1;
    printf("Enter the number to find its factorial : ");
    scanf("%d", &n);

    while (i <= n)
    {
        fac *= i;
        i++;
    }
    printf("Factorial of %d is %d\n", n, fac);
    return 0;
}