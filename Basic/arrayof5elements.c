#include<stdio.h>
int main()
{
   int elements;
   scanf("%d",&elements);
   int array[elements],index;
   for(index=0;index<elements;index++)
   {
    scanf("%d",&array[index]);
   }
   for(index=0;index<elements;index++)
   {
    printf("%d",array[index]);
   }
return 0;
}