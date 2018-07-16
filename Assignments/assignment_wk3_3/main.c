#include <stdio.h>
#define INIT_VALUE -1
int allEvenDigits1(int num);
void allEvenDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("allEvenDigits1(): ");
    result = allEvenDigits1(number);
    if (result == 1)
        printf("All Even\n");
    else if (result == 0)
        printf("Not All Even\n");
    else
        printf("Error\n");
    allEvenDigits2(number, &result);
    printf("allEvenDigits2(): ");
    if (result == 1)
        printf("All Even\n");
    else if (result == 0)
        printf("Not All Even\n");
    else
        printf("Error\n");
    return 0;
}
int allEvenDigits1(int num)
{
    int tempResult = 0;
    while (num>=10)
    {
        if (num%2 != 0)
        {
            tempResult++;
        }
        num /= 10;
    }

    if (num%2 != 0)
    {
        tempResult++;
    }

    if (tempResult>0)
        return 0;
    else
        return 1;
}
void allEvenDigits2(int num, int *result)
{
    int tempResult = 0;
    while (num>=10)
    {
        if (num%2 != 0)
        {
            tempResult++;
        }
        num /= 10;
    }

    if (num%2 != 0)
    {
        tempResult++;
    }

    if (tempResult>0)
        *result = 0;
    else
        *result = 1;
}
