#include<stdio.h>
void main()
{
    int a,b=0,c=2;
  float avg,d=0;
    do
    {
        printf("enter any number:");
        scanf("%i\n",&a);
        if (a==0)
        {
            c=0;
            printf("average");
        }
        else
        b=b+a;
        d=d+1;
        avg=b/d;
    } while (c>1);
   // printf("%i",b);
    printf("%f",avg);
    
    
}