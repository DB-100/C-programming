#include<stdio.h>
void main()
{
    int x[5],a,b;
    for (a=0;a<5;a++)
    {
        printf("enterr value:-");
        scanf("%d",&x[a]);
    }
   for (a=0;a<5; a=a+1)
   for (a=0;a<5; a=a+1)
   {
       printf("%d\n",x[a]);
       b=b+x[a]/5;
       
   }
    printf("the sum of all numbers %d",b);
}