#include <stdio.h>
#define PI 3.1416

int main()
{
    float radius, height, volume, area;

    printf("Enter the radius:\n");
    scanf("%f", &radius);
    printf("Enter the height:\n");
    scanf("%f", &height);
    volume = (PI * radius * radius * height);
    printf("The volume is: %.2f\n", volume);
    area = (2 * PI * radius * height + 2 * PI * radius * radius);
    printf("The surface area is: %.2f\n", area);

    return 0;
}
