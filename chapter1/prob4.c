#include <stdio.h>

int main()
{
    // simple intrest calculator
    int r, t;
    float p;
    printf("Enter the principal amount : ");
    scanf("%f", &p);
    printf("Enter the rate of intrest : ");
    scanf("%d", &r);
    printf("Enter the time in years  : ");
    scanf("%d", &t);
    printf("Simple intrest is : %f", (p * r * t) / 100);
    return 0;
}