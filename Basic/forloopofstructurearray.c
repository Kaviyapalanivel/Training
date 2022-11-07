#include <stdio.h>
#include <string.h>

typedef struct StudentRecord
{
    char studentName[30];
    char studentRollnumber[10];
    char studentDepartment[10];
    int studentFees;
}StudentRecord;

void main()
{

    StudentRecord student[4]= {0};

    for(int index=0; index<4; index++)
    scanf("%s %s %s %d", student[index].studentName, student[index].studentRollnumber, student[index].studentDepartment, &student[index].studentFees);

    for(int index=0; index<4; index++)
    printf("%s %s %s %d\n", student[index].studentName, student[index].studentRollnumber, student[index].studentDepartment,student[index].studentFees);
}
