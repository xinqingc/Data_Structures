#include <stdio.h>
#define INIT_VALUE -1
int findSubstring(char *str, char *substr);
int main()
{
    char str[40], substr[40];
    int result = INIT_VALUE;
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    result = findSubstring(str, substr);
    if (result == 1)
        printf("findSubstring(): Is a substring\n");
    else if ( result == 0)
        printf("findSubstring(): Not a substring\n");
    else
        printf("findSubstring(): An error\n");
    return 0;
}
int findSubstring(char *str, char *substr)
{
    int i = 0, j = 0;
    int subcount = 0;
    while (*(substr+j)!='\0')
        {
            subcount++;
            j++;
        }
    while (*(str+i)!='\0')
    {
        if (*(str+i)==*(substr))
        {
            for (j=0;j<subcount;j++)
            {
                if (*(str+i+j)!=*(substr+j))
                    return 0;
            }
            return 1;
        }
        i++;
    }
    return 0;
}
