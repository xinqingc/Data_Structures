#include <stdio.h>
int numDigits1(int num);
void numDigits2(int num, int *result);
int main()
{
 int number, result=0;

 printf("Enter the number: \n");
 scanf("%d", &number);
 printf("numDigits1(): %d\n", numDigits1(number));
 numDigits2(number, &result);
 printf("numDigits2(): %d\n ", result);

 return 0;
}
int numDigits1(int num)
{
    /* if the user enters number zero, it willl still return 1 */
    int count = 1;
    while (num/10>0)
    {
        count++;
        num=num/10;
    }
    return count;
    //*result = count; is correct too
}

/*value returned through the address*/
void numDigits2(int num, int* result)
{
    *result = 0;

    do
    {
        (*result)++;
        num = num/10;
    } while (num>0);

    /*int temp;
    temp = numDigits1(num);
    *result = temp;
    result = &temp; cannot */
}
