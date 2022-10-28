#include<stdio.h>
void main()
{
    int num,binary,decimal=0,base=1,rem;
    scanf("%d",&num);
    binary=num;
    while(num>0)
    {
        rem=num%10;
        decimal=decimal+rem*base;
        num=num/10;
        base=base*2;
    }
    printf("%d",decimal);
}