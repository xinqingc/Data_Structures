#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit, celsius;

    printf("Enter the temperature in degree F: \n");
    scanf("%f",&fahrenheit);

    celsius = (5/9.0)*(fahrenheit - 32);

    printf("Converted degree in C: %.2f\n", celsius);
    return 0;
}
