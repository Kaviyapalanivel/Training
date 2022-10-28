#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
    FILE *filepointer;
    char filecharacter;
    
    filepointer = fopen("newfile.txt","r");
    do {
        filecharacter = fgetc(filepointer);
        printf("%c", filecharacter);
    }while(filecharacter !=EOF);
    fclose(filepointer);
    }