#include<stdio.h>
 void main ()
{
    int num,a,b;
    b=0;
    printf("enter value of a")
    scanf (" %i\n",a);
    printf ("enter a num");
    scanf("%i ",& num);
    while (a>num)
    {
      a=a-1;
      printf("%i\n",a);
      b=b+a;
    }
    printf("the sum of series %i",b);
    
}