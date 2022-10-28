#include<stdio.h>
int fun()
{
    static int inputdata = 0;
    inputdata ++;
    return inputdata;
}
int main()
{
    printf("%d ",fun());
    printf("%d ",fun());
}