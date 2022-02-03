#include<stdio.h>
void main()
{
    int a,b;
    for (a=1;a<=5;a=a+1)
    {
      for (b=1;b<=a;b=b+1)
      {
         printf("*");
      }
        printf("\n");
    }
    
}