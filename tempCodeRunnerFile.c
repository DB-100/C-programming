#include<stdio.h>
void main()
{
    int a,b=0,c=2;
    do
    {
        printf("enter any number:-");
        scanf("%i\n",&a);
        if (a==0)
        {
            c=0;
            printf("0 achived ");
        }
        else
        b=b+a;
        
    } while (c>1);
    printf("%i",b);
    
}