#include<stdio.h>
int main ()
{
    int a,b;
    a=7;
    b=0;
    while (a<5)
    {
        a=a-1;
        printf("%i\n",a);
        b=a+b;
    }
    printf(" the sum of series %i",b);
}