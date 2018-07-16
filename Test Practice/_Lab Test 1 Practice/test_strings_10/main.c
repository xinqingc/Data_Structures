#include <stdio.h>
int countSubstring(char str[], char substr[]);
int main()
{
    char str[80],substr[80];
    printf("Enter the string: \n");
    gets(str);
    printf("Enter the substring: \n");
    gets(substr);
    printf("countSubstring(): %d\n", countSubstring(str, substr));
    return 0;
}
int countSubstring(char str[], char substr[])
{
    int i = 0, j = 0;
    int subcount = 0;
    int count = 0;
    int correct = 0;

    while (substr[j]!='\0')
    {
        subcount++;
        j++;
    }

    while (str[i]!='\0')
    {
        if (str[i]==substr[0])
        {
            for (j=0;j<subcount;j++)
            {
                if (str[i+j]!=substr[j])
                    break;
                correct++;
            }
            if (correct == subcount)
                count++;
        }
        correct = 0;
        i++;
    }
    return count;
}
