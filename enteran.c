#include<stdio.h>
void main ()
{
    int a,b,c;
    a=0;
    printf("enter a value ");
    scanf("%d",&b);
    while(a<10)
    {
        c=a+b;
        a=a+1;
        printf("%d\n",c);
    }
    
}
