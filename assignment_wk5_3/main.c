#include <stdio.h>
void maxCharToFront(char *str);
int main()
{
    char str[80];
    printf("Enter a string: \n");
    gets(str);
    printf("maxCharToFront(): ");
    maxCharToFront(str);
    puts(str);
    return 0;
}
void maxCharToFront(char *str)
{
    char store = *str;
    int i = 0, j = 0;
    while (*(str+i)!='\0')
    {
        if (*(str+i)>store)
        {
            store = *(str+i);
            j = i;
        }
        i++;
    }
    for (i=j;i!=0;i--)
    {
        *(str+i)=*(str+i-1);
    }
    *str = store;
}
