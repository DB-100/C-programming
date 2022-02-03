#include<stdio.h>
void main()
{
    int a,b;
    a=10;
    do
    {
        a=a-1;
        b=0;
        do
        {
            b=b+1;
            printf("%i %i\n",a,b);
        } while (b<5);
        
    } while (a>1);
    
}