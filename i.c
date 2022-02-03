#include<stdio.h>
void main()
{
    int a,b;
    a=0;
    while (a<5)
    {
     a=a-1;
     b=0;
     while (b<5)
     {
        b=b+1;
        printf(" "); 
     }
     printf("%i\n",b);
    }
    
}