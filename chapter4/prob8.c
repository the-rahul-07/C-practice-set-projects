#include <stdio.h>

int main()
{
    int n;
    int prime = 0;
    printf("Enter number to check prime or not : ");
    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
        prime = 1;
    }
    if (n == 0 || n == 1)
    {
        printf("%d is not a prime number \n", n);
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0 && n != 2)
            {
                prime = 1;
                break;
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