#include<stdio.h>
int main()
{
    int a,b;
    a=0;
    b=1;
    while (a<5)
    {
        a=a+1;
        printf("%d \n",a);
        b=b+a;
    }
    printf("%d",b);
    }
