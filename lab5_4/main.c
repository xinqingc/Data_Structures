#include <stdio.h>
#define INIT_VALUE -1
int palindrome(char *str);
int main()
{
    char str[80];
    int result = INIT_VALUE;
    printf("Enter a string: \n");
    gets(str);
    result = palindrome(str);
    if (result == 1)
        printf("palindrome(): A palindrome\n");
    else if (result == 0)
        printf("palindrome(): Not a palindrome\n");
    else
        printf("An error\n");
    return 0;
}
int palindrome(char *str)
{
    int i = 0;
    int len = 0;
    int j;
    while (str[i] != '\0')
    {
        len++;
        i++;
    }

    j = len-1;

    for (i=0;i<len;i++)
    {
        if (str[i] != str[j])
            return 0;
        j--;
    }
    if (len==0)
        return -1;
    else
        return 1;
}
