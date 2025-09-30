#include <stdio.h>

int main()
{
    int n;
    int sum = 0;
    printf("Enter n : ");
    scanf("%d", &n);

    // using for loop
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }

    // using do while loop
    // int i = 1;
    // do
    // {
    //     sum += i;
    //     i++;
    // } while (i <= n);

    printf("Sum of 1st n natural number is %d\n", sum);
    return 0;
}