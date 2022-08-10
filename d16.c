#include<stdio.h>
void main()
{
    int a,b,c;
    a,b=0;
    printf("enter number :-");
    scanf("%i",&a);
    
    while (a>0)
    {
        a=a-1;
        printf("%i\n",a);
        b=b+a;

    }
    printf("the sum of series is %i :-",b);
}