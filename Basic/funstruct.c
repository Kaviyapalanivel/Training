#include <stdio.h>
#include <string.h>

typedef struct StudentRecord
{
    char studentName[30];
    char studentRollnumber[10];
    char studentDepartment[10];
    int studentFees;
}StudentRecord;

void StudentFunction(char studentName[], char studentRollnumber[], char studentDepartment[], int studentFees)
{
    printf("%s %s %s %d", studentName, studentRollnumber, studentDepartment, studentFees);
}

void main()
{
    StudentRecord student1 = {0};
    StudentRecord student2 = {0};
    StudentRecord student3 = {0};
    
    scanf("%s %s %s %d", student1.studentName, student1.studentRollnumber, student1.studentDepartment, &student1.studentFees);
    scanf("%s %s %s %d", student2.studentName, student2.studentRollnumber, student2.studentDepartment, &student2.studentFees);
    scanf("%s %s %s %d", student3.studentName, student3.studentRollnumber, student3.studentDepartment, &student3.studentFees);

    StudentFunction(student1.studentName, student1.studentRollnumber, student1.studentDepartment, student1.studentFees);
    StudentFunction(student2.studentName, student2.studentRollnumber, student2.studentDepartment, student2.studentFees);
    StudentFunction(student3.studentName, student3.studentRollnumber, student3.studentDepartment, student3.studentFees);
}
