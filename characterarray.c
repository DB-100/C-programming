#include<stdio.h>
void main()
{
    char name[20];
    printf("enter name :-");
    scanf("%[^\n]",& name);
    printf("%s", name);
}