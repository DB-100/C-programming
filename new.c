#include<stdio.h>
void main()
{
    int a,b,k;
    a=6;
    while (a>=1)
    {
      a=a+1;
      b=0;
      while (b<=6-a);
      {
          b=b+1;
          printf(" ");
      }
      k=0;
      while (k!=(2*a-1))
      {
          printf("*");
          k=k+1;
      }
      printf("\n");
      
    }
    
}