#include <stdio.h>

int main()
{
    int n;
    printf("Enter number to check prime or not : ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        printf("%d is not a prime number \n", n);
    }
    else
    {
        int prime = 0;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                prime = 1;
            }
        }
        if (prime == 1)
        {
            printf("%d is not a prime number\n", n);
        }
        else
        {
            printf("%d is prime number", n);
        }
    }
    return 0;
}