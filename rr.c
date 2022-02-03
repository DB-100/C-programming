#include<stdio.h>
int main ()
{
    int a,b,num;
    a=0;
    b=0;
    printf("hello enter a number");
    scanf("%i\n",a);
    while (a>5)
    {
    a=a+1;
    printf("%i\n",a);
    b=b+a;
    }
 printf("the sum of series is %i",b);   
}