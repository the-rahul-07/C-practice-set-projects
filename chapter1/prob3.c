#include <stdio.h>

int main()
{
    // CELCIUS TO FAHRENHEIT
    float c, f;
    printf("Enter the temperature in celcius : ");
    scanf("%f", &c);
    f = ((9.0 / 5.0) * c + 32);
    printf("Temp in fahrenheit is : %f", f);
    return 0;
}