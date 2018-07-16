#include <stdio.h>
int digitPos1(int num, int digit);
void digitPos2(int num, int digit, int *result);

int main()
{
     int number, digit, result=0;
     printf("Enter the number: \n");
     scanf("%d", &number);
     printf("Enter the digit: \n");
     scanf("%d", &digit);
     printf("digitPos1(): %d\n", digitPos1(number, digit));
     digitPos2(number, digit, &result);
     printf("digitPos2(): %d\n", result);
     return 0;
}
int digitPos1(int num, int digit)
{
    int pos, count = 0;
    pos = 0;
    while (num!=0)
    {
        count++;
        if (num%10==digit)
        {
            pos = count;
            break;
            //can also return pos; but if cannot find digit then return 0 at the end
        }
        num = num/10;
    }
    return pos;
}
void digitPos2(int num, int digit, int *result)
{
    int count = 0;
    //set result in main() to 0
    *result = 0;
    while (num!=0)
    {
        count++;
        if (num%10==digit)
        {
            //update result in main() to the found position
            *result = count;
            break;
        }
        num = num/10;
    }
}
