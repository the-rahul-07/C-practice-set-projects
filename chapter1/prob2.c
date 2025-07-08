#include <stdio.h>

int main()
{
    // AREA OF CIRCLE AND VOL OF CYLINDER
    int r;
    int h;
    printf("Enter the radius:");
    scanf("%d", &r);
    printf("Enter the height:");
    scanf("%d", &h);
    printf("Area of the circle with radius %d is %f", r, 3.14 * r * r);
    printf("\nvolume of the cylinder with radius %d and height %d is : %f", r, h, 3.14 * r * r * h);
    return 0;
}
