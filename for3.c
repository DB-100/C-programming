#include<stdio.h>
void main()
{
    int a,b,c;
    a=0,b=0;
     printf("enter any number");
        scanf("%i\n",&c);

  
    do
    {
    
        a=a+1;
            printf("%i\n",a);
            b=a+b;

        
    } 
    

    while (a<=c);
        printf("the sum of series is %i\n:-",b);

    
    
}