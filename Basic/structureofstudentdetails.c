#include <stdio.h>
#include <string.h>

// Review M - Follow the coding guidelines for variable names
typedef struct StudentRecord
{
    // Review M - All variables should be in smaller camel case
    char studentName[20];
    char studentRollnumber[10];
    char studentDepartment[5];
    int studentFee;
}StudentRecord;

// Review M - Follow the coding guidelines for variable names
int main()
{
    StudentRecord record = {0};

    scanf("%s", record.studentName);
    scanf("%s", record.studentRollnumber);
    scanf("%s", record.studentDepartment);
    scanf("%d", &record.studentFee);

    printf("%s \n", record.studentName);
    printf("%s \n", record.studentRollnumber);
    printf("%s \n", record.studentDepartment);
    printf("%d \n", record.studentFee);
    return 0;
}

// Review M - Give empty line