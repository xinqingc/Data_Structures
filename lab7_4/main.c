#include <stdio.h>
#define SIZE 20
int rCountArray(int array[], int n, int a);
int main()
{
    int array[SIZE];
    int index, count, target, size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d numbers: \n", size);
    for (index = 0; index < size; index++)
        scanf("%d", &array[index]);
    printf("Enter the target number: \n");
    scanf("%d", &target);
    count = rCountArray(array, size, target);
    printf("rCountArray(): %d\n", count);
    return 0;
}
int rCountArray(int array[], int n, int a)
{
    if (n==1 && array[0] == a) //smallest problem when array is 1
        return 1;
    else if (n==1 && array[0] != a)
        return 0;
    else
    {
        if (array[0]==a)
            return rCountArray (array+1, n-1, a) + 1;
        else
            return rCountArray (array+1, n-1, a);
    }
}
