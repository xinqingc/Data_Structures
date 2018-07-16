#include <stdio.h>
#include <stdlib.h>

int main()
{
     int count, lines, input;
     float total;
     double average;
     int i;
     printf("Enter number of lines: \n");
     scanf("%d", &lines);

     /*initialise total and count to zero*/
     total = 0;
     count = 0;

     while (lines !=-1)
     {
        total += lines;
        count++;
        scanf("%d", &lines);
     }
     average = total/count;
     printf ("Average = %.2f\n", average);
     return 0;
}
