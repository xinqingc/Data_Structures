#include <stdio.h>
float rPower1(float num, int p);
int main()
{
    int power;
    float number;
    printf("Enter the number and power: \n");
    scanf("%f %d", &number, &power);
    printf("rPower1(): %.2f\n", rPower1(number, power));
    return 0;
}
float rPower1(float num, int p)
{
    if (p==0)
        return 1;
    else if (p==1)
        return num;
    else if (p>1)
        return rPower1(num, p-1) * num;
    else
        return rPower1(num, p+1) / num;
}
