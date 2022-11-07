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
    StudentRecord *structurePointer1;
    StudentRecord *structurePointer2;
    StudentRecord *structurePointer3;

    StudentRecord student1 = {0};
    StudentRecord student2 = {0};
    StudentRecord student3 = {0};

    structurePointer1 = &student1;
    structurePointer2 = &student2;
    structurePointer3 = &student3;
    
    scanf("%s %s %s %d", structurePointer1->studentName, structurePointer1->studentRollnumber, structurePointer1->studentDepartment, &structurePointer1->studentFees);
    scanf("%s %s %s %d", structurePointer2->studentName, structurePointer2->studentRollnumber, structurePointer2->studentDepartment, &structurePointer2->studentFees);
    scanf("%s %s %s %d", structurePointer3->studentName, structurePointer3->studentRollnumber, structurePointer3->studentDepartment, &structurePointer3->studentFees);

    printf("%s %s %s %d\n", structurePointer1->studentName, structurePointer1->studentRollnumber, structurePointer1->studentDepartment, structurePointer1->studentFees);
    printf("%s %s %s %d\n", structurePointer2->studentName, structurePointer2->studentRollnumber, structurePointer2->studentDepartment, structurePointer2->studentFees);
    printf("%s %s %s %d\n", structurePointer3->studentName, structurePointer3->studentRollnumber, structurePointer3->studentDepartment, structurePointer3->studentFees);
}
