#include <stdio.h>
void printReverse1(int ar[], int size);
void printReverse2(int ar[], int size);
void reverseAr1D(int ar[], int size);
int main()
{
 int ar[10];
 int size, i;

 printf("Enter array size: \n");
 scanf("%d", &size);
 printf("Enter %d data: \n", size);
 for (i=0; i <= size-1; i++)
 scanf("%d", &ar[i]);
 printReverse1(ar, size);
 printReverse2(ar, size);
 reverseAr1D(ar, size);
 printf("reverseAr1D(): ");
 if (size > 0) {
 for (i=0; i<size; i++)
 printf("%d ", ar[i]);
 }
 return 0;
}
void printReverse1(int ar[], int size)
{
    int i;
    printf("printReverse1(): ");
    for (i = size-1; i >=0; i--)
    {
        printf("%d ", ar[i]);
    }
    printf("\n");
}
void printReverse2(int ar[], int size)
{
    int i;
    printf("printReverse2(): ");
    for (i = size-1; i >=0; i--)
    {
        printf("%d ", *(ar+i));
    }
    printf("\n");

}
void reverseAr1D(int ar[ ], int size)
{
    int i, j = 0, temp;
    for (i = size-1; i >=(size-1)/2; i--)
    {
        temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;
        j++;
    }
}
