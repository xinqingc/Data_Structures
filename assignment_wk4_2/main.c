#include <stdio.h>
void swapMinMax1D(int ar[], int size);
int main()
{
    int ar[50],i,size;
    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d",ar+i);
    swapMinMax1D(ar, size);
    printf("swapMinMax1D(): ");
    for (i=0; i<size; i++)
        printf("%d ",*(ar+i));
    return 0;
}
void swapMinMax1D(int ar[], int size)
{
    int i, max, min, imax, imin, *ptr;
    ptr = ar;
    max = *ptr;
    min = *ptr;
    for (i=0;i<size;i++)
    {
        if (*ptr>=max)
        {
            max = *ptr;
            imax = i;
        }
        if (*ptr<=min)
        {
            min = *ptr;
            imin = i;
        }
        ptr++;
    }
    ar[imax] = min;
    ar[imin] = max;
}
