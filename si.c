#include<stdio.h>
int main()
{
    float P,R,T,SI;

    printf("enter principle value");
    scanf("%f",&P);

    printf("enter rate");
    scanf("%f",&R);

    printf("enter time");
    scanf("%f",&T);

    SI=  (P*R*T)/100;
    printf("the simple intrest P&R&T = %f",SI);
}