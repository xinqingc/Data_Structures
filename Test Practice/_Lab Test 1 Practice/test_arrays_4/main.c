#include <stdio.h>
#define SIZE 5
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max);
int main()
{
    int A[5][5];
    int i,j,min,max;
    printf("Enter the matrix data (%dx%d): \n", SIZE, SIZE);
    for (i=0; i<5; i++)
        for (j=0; j<5; j++)
            scanf("%d", &A[i][j]);
    findMinMax2D(A, &min, &max);
    printf("min = %d\nmax = %d", min, max);
    return 0;
}
void findMinMax2D(int ar[SIZE][SIZE], int *min, int *max)
{
    int i;
    int *p;
    p = ar;
    *max = ar[0][0];
    *min = ar[0][0];
    for (i=0;i<25;i++)
    {
        if(*(p+i)>*max)
            *max = *(p+i);
        if(*(p+i)<*min)
            *min = *(p+i);
    }
}
