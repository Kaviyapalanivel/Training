#include<stdio.h>
void main()
{
    FILE *filepointer;
    filepointer = fopen ("newfile.txt","w");
    fputs("Good Morning",filepointer);
}