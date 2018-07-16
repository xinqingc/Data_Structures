#include <stdio.h>
#include <stdlib.h>

int main()
{
    int studentNumber, divStudentNumber;
    char grade;
    printf("Enter Student ID: \n");
    scanf("%d", &studentNumber);
    while (studentNumber != -1)
    {
        divStudentNumber = studentNumber/5;
        switch (divStudentNumber)
        {
        case 20: case 19: case 18: case 17: case 16: case 15:
            grade = 'A';
            printf("Grade = %c\n", grade);
            break;

        case 14: case 13:
            grade = 'B';
            printf("Grade = %c\n", grade);
            break;

        case 12: case 11:
            grade = 'C';
            printf("Grade = %c\n", grade);
            break;

        case 10: case 9:
            grade = 'D';
            printf("Grade = %c\n", grade);
            break;

        default:
            grade = 'F';
            printf("Grade = %c\n", grade);
            break;
        }
    scanf("%d", &studentNumber);
    }
    return 0;
}
