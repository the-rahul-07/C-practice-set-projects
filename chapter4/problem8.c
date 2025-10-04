#include <stdio.h>

int main()
{
    int n;
    printf("Enter number to check prime or not : ");
    scanf("%d", &n);
    // this method is made by me but its not correct at some multiple of 9
    // hve to modifie this method
    for (int i = 1; i <= n; i++)
    {
        if (i > 1 && i < n)
        {
            if (n % i == 0)
            {
                printf("%d is not prime number\n", n);
                break;
            }
            else
            {
                printf("%d is prime number\n", n);
                break;
            }
        }
    }
    return 0;
}