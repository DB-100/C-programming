#include<stdio.h>
void main()
{
int a,b,c, max;
printf("\n enter three number:");
scanf ("%d%d%d",&a,&b,&c);
max=(a>b&&a>c)?a:(b>a&&b>c)?b:c;
printf("max number =%d",max);
}