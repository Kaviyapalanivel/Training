#include <stdio.h>
#include <string.h>

typedef struct StudentRecord
{
    char studentName[30];
    char studentRollnumber[10];
    char studentDepartment[10];
    int studentFees;
}StudentRecord;

StudentRecord StructStudent()
{
    StudentRecord;
    scanf("%s %s %s %d",student.studentName,student.studentRollnumber,student.studentDepartment,&student.studentFees);
    return student;
}

void main()
{
    StudentRecord student;
    student = StructStudent();
    printf("%s %s %s %d",student.studentName,student.studentRollnumber,student.studentDepartment,student.studentFees);
}


