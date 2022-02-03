#include<stdio.h>
void main()
{
    int a,b;
    a=0;
    b=0;
    while (a<5)
    {
        a=a+1;
      
        while (b>a)
        {
         b=b+1;
         printf("*",a);
        }
        
    }
}