#include <stdio.h>
#include <string.h>
struct student{
    char name[20]; /* student name */
    double testScore; /* test score */
    double examScore; /* exam score */
    double total; /* total = (testScore+examScore)/2 */
};
double average();
int main()
{
    printf("average(): %.2f\n", average());
    return 0;
}
double average()
{
    struct student stud[50];
    int i = 0;
    double sum = 0;
    double average = 0;
    char dummychar; //flush string

    printf("Enter student name:\n");
    gets(stud[i].name);
    while (strcmp(stud[i].name,"END")!=0)
    {
        printf("Enter test score: \n");
        scanf("%lf", &stud[i].testScore);
        printf("Enter exam score: \n");
        scanf("%lf", &stud[i].examScore);
        stud[i].total = (stud[i].testScore + stud[i].examScore) / 2;
        printf("Student %s total = %.2lf \n",stud[i].name, stud[i].total);
        sum += stud[i].total;
        i++;
        printf("Enter student name:\n");
        scanf("%c", &dummychar); // or scanf("\n")
        gets(stud[i].name);
    }
    if (i==0)
        average = 0.00;
    else
        average = sum / i;
    return average;
}
