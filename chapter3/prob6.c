#include <stdio.h>

int main()
{
    int a, b, c, d;
    printf("Enter four numbers\n");
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);
    printf("Enter c : ");
    scanf("%d", &c);
    printf("Enter d : ");
    scanf("%d", &d);

    if (a > b && a > c && a > d)
    {
        printf("Greatest of all is %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("Greatest of all is %d", b);
    }
    else if (c > a && c > b && c > d)
    {
        printf("Greatest of all is %d", c);
    }
    else if (d > a && d > b && d > c)
    {
        printf("Greatest of all is %d", d);
    }
    else if (a == b && b == c && c == d)
    {
        printf("All numbers are equal and all are greatest\n");
    }
    return 0;
}