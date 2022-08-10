#include<stdio.h>
void main ()
{
    int a=0,b=0,c;
    printf("enter value :-");
    scanf("%i",&c);
    while (a<c)
    {
        a=a+1;
        printf("%i\n",a);
        b=a+b;
    }
    printf("the sum of series is %i",b);
}