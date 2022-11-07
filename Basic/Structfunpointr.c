#include <stdio.h>
#include <string.h>

typedef struct StudentRecord
{
    char Name[30];
    char Rollnumber[10];
    char Department[10];
    int Fees;
}StudentRecord;

void PrintStudent(StudentRecord *studentdata)
{
    printf("%s %s %s %d",studentdata->Name,studentdata->Rollnumber,studentdata->Department,studentdata->Fees);
}

void main()
{
    StudentRecord student1 = {0};
    StudentRecord *student2 = &student1;

    scanf("%s %s %s %d",student2->Name,student2->Rollnumber,student2->Department,&student2->Fees);
    
    PrintStudent(student2);
}
