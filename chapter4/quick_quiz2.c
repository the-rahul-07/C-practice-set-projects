#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many natural number to be printed : ");
    scanf("%d", &n);

    int i = 0;
    printf("The natural numbers upto %d are : \n", n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}