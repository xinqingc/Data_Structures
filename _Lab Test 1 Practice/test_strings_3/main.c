#include <stdio.h>
int countWords(char *s);
int main()
{
    char str[50];
    printf("Enter the string: \n");
    gets(str);
    printf("countWords(): %d", countWords(str));
    return 0;
}
int countWords(char *s)
{
    int i=0;
    int count=0;
    while (*(s+i)!='\0')
    {
        if (*(s+i)==' ')
            count++;
    i++;
    }
    if (i>0)
        count++;
    return count;
}
