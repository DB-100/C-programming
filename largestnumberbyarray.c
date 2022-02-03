#include<stdio.h>
void main()
{
    int x[10],a,b=0;

    for (a=0;a<10;a=a+1)
    {
        printf("enter number");
        scanf("%i",&x[a]);
    }
    for (a=0;a<10;a=a+1)
    {
        printf("%i\n",x[a]);
        if (x[a]>b)
        {
            b=x[a];
        }
    }
       printf("the largest number %i",b); 
    
    

}