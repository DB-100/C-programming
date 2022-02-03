#include<stdio.h>
void fact(int);
void main()
{
    int x;
       printf("enter the numbr you want");
       scanf("%d",&x);
       fact(x);
}
  void fact(int a)
  {
      int i,factorial=1;
      for(i=1;i<=a;i++)
      factorial=factorial*i;
      printf("the factorial of the number is %d",factorial);
  }
  