#include<stdio.h>
int main()
{
    int value=10;
    int *ptr=&value;
    printf("%d\n",value);
    printf("%d\n",ptr);
    printf("%d\n",&value);
    printf("%d\n",*ptr);
    printf("%d\n",&ptr);
    return 0;
}