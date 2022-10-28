#include<stdio.h>
int main()
{
    int number=4;
    int*ptr=&number;
    printf("%d\n%p\n",*ptr,*ptr);
    char character='A';
    char *p=&character;
    printf("%c\n%p",*p,*ptr);
}