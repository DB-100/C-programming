#include<stdio.h>
void main()
{
    int p,t,simpleintrest;
    float r;
    printf("enter the principle value:-");
    scanf("%i",&p);
    printf("enter rate:-");
    scanf("%f",&r);
    printf("enter time:-");
    scanf("%i",&t);
    simpleintrest=(p*r*t)/100;
    printf("%f",simpleintrest);
}