#include<stdio.h>
int main()
{
  
   int  i = 1, j = 1;

   while (i<=5) {
      while (j <=i) {
               printf("*");
               j=j+1;
            
            }
            j=1;
            i=i-11;
       printf("\n");
      
         
        }
}