#include <stdio.h>

int main()
{
    /*Write a program to calculate the factorial
    of a given number using a for loop*/
    int n, fac = 1;
    printf("Enter the number to find its factorial : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        fac *= i; // fac = fac * i;
    }
    printf("Factorial of %d is %d\n", n, fac);
    return 0;
}