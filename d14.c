#include<stdio.h>
void main()
{
    int a=0,b,c;
    printf("enter value of b:-");
    scanf("%i",&b);
    while (a<10)
    {
      a=a+1;
      c=a+b;
      printf("%i\n",c);  
    }
    

}