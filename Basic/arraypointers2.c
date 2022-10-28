#include<stdio.h>
int main()
{
    int arr[3]={10,20,30};
    int *ptr=&arr,index;
    printf("%d\n",arr);
    printf("%d\n",&ptr);
    printf("%d\n",ptr);
    for(index=0;index<3;index++)
    {
        printf("%d\n",*(ptr+index));
        printf("%d\n",(ptr+index));
    }
}