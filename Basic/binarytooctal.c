#include<stdio.h>
int main()
{
    long int binary,octal=0,num=1,rem;
    scanf("%ld",&binary);
    while(binary!=0)
    {
        rem=binary%10;
        octal=octal+rem*num;
        num=num*2;
        binary=binary/10;
    }
    printf("%lo",octal);//unsigned long integear printed in octal
    return 0;
}