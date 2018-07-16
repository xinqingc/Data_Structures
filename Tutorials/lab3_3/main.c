#include <stdio.h>
int square1(int num);
void square2(int num, int *result);
int main()
{
     int number, result=0;
     printf("Enter the number: \n");
     scanf("%d", &number);
     printf("square1(): %d\n", square1(number));
     square2(number, &result);
     printf("square2(): %d\n", result);
     return 0;
}
int square1(int num)
{
    int num2,i, square;
    num2 = -1;
    square = 0;
    for (i=1;i<=num;i++)
    {
        num2 = num2 +2;
        square = square + num2;
    }
    return square;
}
void square2(int num, int *result)
{
    int num2,i, square;
    num2 = -1;
    *result = 0;
    for (i=1;i<=num;i++)
    {
        num2 = num2 +2;
        *result = *result + num2;
    }
}
