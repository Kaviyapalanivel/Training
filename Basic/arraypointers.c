#include<stdio.h>
int main()
{
    int arr[3]={10,20,30};
    int *ptr=&arr,index;
    for(index=0;index<3;index++)
    {
        printf("%d\n",*(ptr+index));
    }
    return 0;

}