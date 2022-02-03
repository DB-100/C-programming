#include<stdio.h>
void main()
{
    int a,b,c,no;
    printf("enter any number:- ");
    scanf("%i\n",&no);
    for ( a=1;a<=no;a=a+1,b=a*a)
    {
         c=c+b;
    
       
    }
 printf("the sum of series is:- %i",c);
}