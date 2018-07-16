#include <stdio.h>
#define INIT_VALUE 0
int extOddDigits1(int num);
void extOddDigits2(int num, int *result);
int main()
{
    int number, result = INIT_VALUE;
    printf("Enter a number: \n");
    scanf("%d", &number);
    printf("extOddDigits1(): %d\n", extOddDigits1(number));
    extOddDigits2(number, &result);
    printf("extOddDigits2(): %d\n", result);
    return 0;
}
int extOddDigits1(int num)
{
    int tempResult = 0, result = 0;
    while (num != 0)
    {
        if (num%2 != 0)
        {
            tempResult = tempResult * 10 + (num%10);
        }
        num /= 10;
    }

    while (tempResult!=0)
    {
        result = result * 10 + (tempResult%10);
        tempResult/= 10;
    }

        if (result>0)
            return result;
        else
            return -1;
}
void extOddDigits2(int num, int *result)
{
    int tempResult = 0;
    while (num != 0)
    {
        if (num%2 != 0)
        {
            tempResult = tempResult * 10 + (num%10);
        }
        num /= 10;
    }

    while (tempResult != 0)
    {
        *result = (*result) * 10 + (tempResult%10);
        tempResult/= 10;
    }

        if (*result==0)
            *result = -1;
}
