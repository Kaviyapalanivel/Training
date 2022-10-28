#include<stdio.h>
int fun()
{
    static int inputdata=8;
    inputdata ++;
    return inputdata;
}
int inputdata = 7;
int main()
{
    printf("%d\n",inputdata);
    printf("%d\n",fun());
    printf("%d\n",fun());
    return 0;
}