#include<stdio.h>
void main()
{
    FILE *filepointer;
    filepointer = fopen("newfileprintf.txt","w");
    printf("Good Morning Everybody",filepointer);
}