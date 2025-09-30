#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n : ");
    scanf("%d", &n);
    // i>=1 or sirf i is same as when i value is zero loop exits as it is false
    for (int i = 10; i; --i)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}