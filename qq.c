#include<stdio.h>
int main()
{
    int a,b,c;

    a=0;
    b=0;
    printf("enter any number");
    scanf("%i\n",a);
    while (a<5)
    {
        a=a+1;
        b=a*a;
        printf("%i\n",b);
        c=a+b;
    }
    printf("the sum of series %i",c);
}