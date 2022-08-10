#include<stdio.h>
void main()
{
    int a,b,c=0;
    printf("enter number :-");
    scanf("%i",&a);
    while (a>0)
    {
        a=a-1;
        b=a*a;
        printf("%i\n",b);
        c=b+c;




    }
    printf("%i\n",&c);
    

}