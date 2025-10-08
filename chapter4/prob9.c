#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of a : ");
    scanf("%d", &n);

    int prime = 0, i = 2;
    if (n == 0 || n == 1)
    {
        prime = 1;
    }

    while (i < n)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
        i++;
    }
    if (prime == 1)
    {
        printf("%d is not a prime number\n", n);
    }
    else
    {
        printf("%d is a prime number\n", n);
    }

    return 0;
}