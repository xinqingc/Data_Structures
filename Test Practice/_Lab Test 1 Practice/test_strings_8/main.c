#include <stdio.h>
#include <string.h>
void mergeStr(char *a, char *b, char *c);
int main()
{
    char a[80],b[80];
    char c[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    mergeStr(a,b,c);
    printf("mergeStr(): ");
    puts(c);
    return 0;
}
void mergeStr(char *a, char *b, char *c)
{
    char min1, min2;
    int i = 1, j = 0, min1index=0;
    strcat(a,b);
    min1 = 'z';

    while (*(a+j)!='\0')
    {
        if (*(a+j)<min1)
        {
            min1 = *(a+j);
            min1index = j;
            *(c+0)=min1;
        }
        *(a+min1index)='{';
        j++;
    }
    while (*(a+i)!='\0')
    {
        j=0;
        min2 = 'z';
        while (*(a+j)!='\0')
        {
            if (*(a+j)<min2 && *(a+j)>=min1)
            {
                min2 = *(a+j);
                min1index = j;
            }
            j++;
        }
        *(c+i)=min2;
        min1=min2;
        *(a+min1index)='{';
        i++;
    }
    *(c+i)='\0';
}
