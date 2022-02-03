#include<stdio.h>
int main()
{
    int a,b,c,num ;
    a=0;
    b=0;
    printf("enter any number ");
    scanf(" %i \n",&a);
    while (a<5)
    {
    a=a+1;
    c=a*a; 
    printf("%i\n",c);
    b=b+c;
    }
printf("sum of squares %i\n",b);
}
