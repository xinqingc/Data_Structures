#include <stdio.h>
#include <math.h>

int main()
{
    float distance, x1, y1, x2, y2;

    printf("Enter first point x1 y1:\n");
    scanf("%f %f", &x1, & y1);
    printf("Enter second point x2 y2:\n");
    scanf("%f %f", &x2, &y2);
    distance = sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
    printf("The distance is %.2f", distance);

    return 0;
}
