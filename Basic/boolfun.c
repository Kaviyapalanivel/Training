#include <stdio.h>
#include <string.h>
#include <stdbool.h>

typedef struct Student
{
    char name[30];
    char rollNumber[10];
    char department[10];
    int fees;
} Student;

bool PrintStudent(Student *student, char department1[], int studentList)
{
    for(int index = 0; index < studentList; index++)
    {
        if(strcmp((student+index)->department,department1) == 0)
        {
           printf("Name of the students from required department :\n");
           printf("%s\n", (student+index)->name);
        }
    }
    return true;
}
    
void main()
{
    int studentList = 0;

    printf("Number of students = "); 
    scanf("%d", &studentList);

    Student student[studentList];

    for(int index = 0; index < studentList; index++)
    {
        printf("Enter the student %d : \n",index+1);
        scanf("%s %s %s %d",(student + index)->name, (student+index)->rollNumber, (student+index)->department, &(student+index)->fees);
    }

    char department[10] = {0};

    printf("Enter the required department : ");
    scanf("%s", department);

    if(PrintStudent(student, department, studentList)==true)
    {
        printf("program executed");
    }
}
