#include <stdio.h>
#include <string.h>
#define MAX 100
typedef struct {
   char name[40];
   char telno[40];
   int id;
   double salary;
} Employee;
int readin(Employee *p);
void printEmp(Employee *p, int size) ;
int search(Employee *p, int size, char *target);
int addEmployee(Employee *p, int size, char *target);
int main()
{
   Employee emp[MAX];
   char name[10];
   int k, found = 0, ans, size=0, choice, result;

   printf("Select one of the following options: \n");
   printf("1: readin() \n");
   printf("2: search() \n");
   printf("3: addEmployee() \n");
   printf("4: print() \n");
   printf("5: exit() \n");
   do {
      printf("Enter your choice: \n");
      scanf("%d", &choice);
      switch (choice) {
         case 1:
            size = readin(emp);
            break;
         case 2:
            printf("Enter search name: \n");
            scanf("\n");
            gets(name);
            result = search(emp,size,name);
            if (result != 1)
               printf ("Name not found! \n");
            break;
         case 3:
            printf("Enter new name: \n");
            scanf("\n");
            gets(name);
            result = search(emp,size,name);
            if (result != 1)
               size = addEmployee(emp, size, name);
            else
               printf("The new name has already existed in the database");
            break;
         case 4:
            printEmp(emp, size);
            break;
         default:
            break;
      }
   } while (choice < 5);
   return 0;
}
int readin(Employee *p)
{
    int i=0;
    printf("Enter name:\n");
    scanf("\n");
    gets(p->name);
    while (*(p+i)->name!='#')
    {
        printf("Enter tel:\n");
        gets((p+i)->telno);
        printf("Enter id:\n");
        scanf("%d", &((p+i)->id));
        printf("Enter salary:\n");
        scanf("%lf", &((p+i)->salary));
        printf("Enter name:\n");
        scanf("\n");
        i++;
        gets((p+i)->name);
    }
    return i;
}
void printEmp(Employee *p, int size)
{
    int i;
    printf("The current employee list:\n");
    for (i=0;i<size;i++)
        printf("%s %s %d %.2lf\n", (p+i)->name, (p+i)->telno, (p+i)->id, (p+i)->salary);
}
int search(Employee *p, int size, char *target)
{
    int i;
    for (i=0;i<*target;i++)
    {
        if (strcmp(target,(p+i)->name)==0)
        {
            printf("Employee found at index location: %d\n", i);
            printf("%s %s %d %.2lf\n", (p+i)->name, (p+i)->telno, (p+i)->id, (p+i)->salary);
            return 1;
        }
    }
    return 0;
}
int addEmployee(Employee *p, int size, char *target)
{
    int i=0,j;
    if (size>=100)
    {
        printf("Database is full\n");
        return size;
    }
    else
    {
        while (target[i]!='\0')
        {
            (p+size)->name[i] = target[i];
            i++;
        }
        printf("Enter tel:\n");
        gets((p+size)->telno);
        printf("Enter id:\n");
        scanf("%d", &((p+size)->id));
        printf("Enter salary:\n");
        scanf("%lf", &((p+size)->salary));
        j=size+1;
        printf("Added at position: %d\n",size);
        return j;
    }
}
