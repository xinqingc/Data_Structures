#include <stdio.h>
int longWordLength(char *s);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    printf("longWordLength(): %d\n", longWordLength(str));
    return 0;
}
int longWordLength(char *s)
{
    int i = 0, count1 = 0, count2 = 0;
    while (*(s+i)!='\0')
    {
        if (isalpha(*(s+i)))
        {
            count2++;
            if (count2>count1)
                count1 = count2;
        }
        else
            count2 = 0;
        i++;
    }
    return count1;
}
