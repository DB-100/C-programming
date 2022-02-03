#include<stdio.h>
struct student
{
    int rollnumber;
    char name[20];
    char sex[10];
    float fee;
};

void main()
{
struct student s;
int i;
printf("enter rollnumber");
scanf("%i",& s.rollnumber);
printf("enter name");
scanf("\n%[^\n]",& s.name);
printf("enter sex");
scanf("\n%s",&s.sex);
printf("enter fee");
scanf("%f",&s.fee);


printf("\ndisplay the information \n");

printf("the roll no:%i \n",s.rollnumber);
printf("printd name:%s \n",s.name);
printf("printing gender  %s /n",s.sex);
printf(" \t the fee is%f",s.fee);
/*
for ( i = 0; i <5; i++)
{
   printf("\n Roll no %d is %d ",s.rollnumber[i]); 
}
*/
}
