#include <stdio.h>
#include <string.h>

typedef struct Student
{
    char studentName[30];
    char studentRollnumber[10];
    char studentDepartment[10];
    int studentFees;
}Student;

void StudentFunction(Student student)
{
    printf("%s %s %s %d\n", student.studentName, student.studentRollnumber, student.studentDepartment, student.studentFees);
}

void main()
{
    Student student1 = {0};
    Student student2 = {0};
    Student student3 = {0};

    scanf("%s %s %s %d", student1.studentName, student1.studentRollnumber, student1.studentDepartment, &student1.studentFees);
    scanf("%s %s %s %d", student2.studentName, student2.studentRollnumber, student2.studentDepartment, &student2.studentFees);
    scanf("%s %s %s %d", student3.studentName, student3.studentRollnumber, student3.studentDepartment, &student3.studentFees);

    StudentFunction(student1);
    StudentFunction(student2);
    StudentFunction(student3);
}

