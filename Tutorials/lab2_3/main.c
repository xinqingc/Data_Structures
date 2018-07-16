#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, col, height;
    int num = 0;
    printf("Enter the height: \n");
    scanf("%d", &height);
    printf("Pattern: \n");

    /*row start from zero, col need to be row + 1 or no column printed*/
    for (row = 0; row < height; row ++)
    {
        num++;
        for (col = 0; col < row+1; col++)
        {
            printf("%d", num);
        }
        printf("\n");
        if (num==3)
            num= 0;
        /* can change to
        num = num %3;
        1%3=1, 2%3=2, 3%3=0
        */
    }

    return 0;
}
