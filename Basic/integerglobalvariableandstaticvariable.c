#include<stdio.h>
int fun()
{
    static int count = 9;
    count ++;
    return count;
}
  int count = 5;
  int main()
  {
    printf("%d ",count);
    printf("%d ",fun());
    printf("%d ",fun());
    return 0;
  }