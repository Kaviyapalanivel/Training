#include <stdio.h>
#include <string.h>

typedef struct StudentRecord
{
    char Name[30];
    char Rollnumber[10];
    char Department[10];
    int Fees;
}StudentRecord;

void StudentDetails(StudentRecord student2)
{
    printf("%s %s %s %d",student2.Name,student2.Rollnumber,student2.Department,student2.Fees);
}

void main()
{
    StudentRecord student1 = {0};
    scanf("%s %s %s %d",student1.Name,student1.Rollnumber,student1.Department,&student1.Fees);

    StudentDetails(student1);
}

