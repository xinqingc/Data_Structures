#include <stdio.h>
int compareStr(char *s, char *t);
int main()
{
    char a[80],b[80];
    printf("Enter the first string: \n");
    gets(a);
    printf("Enter the second string: \n");
    gets(b);
    printf("compareStr(): %d\n", compareStr(a,b));
    return 0;
}
int compareStr(char *s, char *t)
{
    int i = 0;
    int end = 0;
    int result = 0;
    while (end!=2)
    {
        if (*(s+i)=='\0')
            end++;
        if (*(t+i)=='\0')
            end++;
        if (*(s+i)==*(t+i))
            result = 0;
        else
        {
            result = *(s+i)-*(t+i);
            end = 2;
        }
        i++;
    }
    return result;
}
