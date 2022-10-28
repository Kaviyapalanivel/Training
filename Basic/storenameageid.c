#include<stdio.h>
#include<string.h>
struct employeerecord{
    int age;
    int id;
    char name[30];
};
int main()
{
    struct employeerecord s1;
    s1.age=21;
    s1.id=22;
    strcpy(s1.name,"KAVIYA");
    printf("%d %d %s",s1.age,s1.id,s1.name);
    return 0;
}