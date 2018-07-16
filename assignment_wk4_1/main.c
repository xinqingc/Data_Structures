#include <stdio.h>
void find2Max1D(int ar[], int size, int *max1, int *max2);
int main()
{
    int max1,max2;
    int ar[10],size,i;

    printf("Enter array size: \n");
    scanf("%d", &size);
    printf("Enter %d data: \n", size);
    for (i=0; i<size; i++)
        scanf("%d", &ar[i]);
    find2Max1D(ar,size,&max1,&max2);
    printf("Max1: %d\nMax2: %d\n",max1,max2);
    return 0;
}
void find2Max1D(int ar[], int size, int *max1, int *max2)
{
    int *ptr, i, j;
    ptr = ar;
    *max1=*ptr;
    for (i=0; i<size; i++) //find max 1
    {
        if (*ptr>(*max1))
            *max1 = *ptr;
        ptr++;
    }
    ptr = ar;
    *max2 = *max1-99999999999;

    for (j=0; j<size; j++) //find max 2
    {
        if (*ptr>(*max2) && *ptr!=*max1)
            *max2 = *ptr;
        ptr++;
    }
}
