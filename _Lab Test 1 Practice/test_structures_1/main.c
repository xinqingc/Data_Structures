#include <stdio.h>
typedef struct {
    char name[20];
    int age;
} Person;
void readData(Person *p);
Person findMiddleAge(Person *p);
int main()
{
    Person man[3], middle;
    readData(man);
    middle = findMiddleAge(man);
    printf("findMiddleAge(): %s %d\n", middle.name, middle.age);
    return 0;
}
void readData(Person *p)
{
    int i = 0, x = 1;
    for (i = 0; i < 3; i++)
    {
        printf("Enter person %d:\n", x);
        scanf("%s %d", (p+i)->name, &((p+i)->age));
        x++;
    }
}
Person findMiddleAge(Person *p)
{
    if ((p+0)->age > (p+1)->age)
    {
        if ((p+2)->age > (p+0)->age)
            return *(p+0);
        else if ((p+1)->age > (p+2)->age)
            return *(p+1);
        else
            return *(p+2);
    }
    else if ((p+1)->age > (p+0)->age)
    {
        if ((p+2)->age > (p+1)->age)
            return *(p+1);
        else if ((p+0)->age > (p+2)->age)
            return *(p+0);
        else
            return *(p+2);
    }
}
