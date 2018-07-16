#include <stdio.h>
void processString(char *str, int *totVowels, int *totDigits);
int main()
{
    char str[50];
    int totVowels, totDigits;
    printf("Enter the string: \n");
    gets(str);
    processString(str, &totVowels, &totDigits);
    printf("Total vowels = %d\n", totVowels);
    printf("Total digits = %d\n", totDigits);
    return 0;
}
void processString(char *str, int *totVowels, int *totDigits)
{
    int i=0;
    *totVowels=0;
    *totDigits=0;
    while (*(str+i)!='\0')
    {
        if (*(str+i)=='a' || *(str+i)=='e' || *(str+i)=='i' || *(str+i)=='o' || *(str+i)=='u' || *(str+i)=='A' || *(str+i)=='E' || *(str+i)=='I' || *(str+i)=='O' || *(str+i)=='U')
            (*totVowels)++;
        else if (*(str+i)=='1' || *(str+i)=='2' || *(str+i)=='3' || *(str+i)=='4' || *(str+i)=='5' || *(str+i)=='6' || *(str+i)=='7' || *(str+i)=='8' || *(str+i)=='9' || *(str+i)=='0')
            (*totDigits)++;
        i++;
    }
}
