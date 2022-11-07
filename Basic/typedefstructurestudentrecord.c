
#include<stdio.h>
#include<string.h>

struct studentrecord
{

    char studentname[30];
    char studentrollnumber[10];
    char studentdepartment[5];
    int studentfee;
};

int main()
{
struct studentrecord details;
scanf("%s",details.studentname);
scanf("%s",details.studentrollnumber);

scanf("%s",details.studentdepartment);
scanf("%d",&details.studentfee);


printf("%s \n",details.studentname);
printf("%s \n",details.studentrollnumber);

printf("%s \n",details.studentdepartment);
printf("%d \n",details.studentfee);

return 0;
}