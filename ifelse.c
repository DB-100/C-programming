#include <stdio.h>
int main()
{
  
  int a, b,ch;
  printf("\n Please Enter a choice \n1.Addition \n 2.subtraction \n 3.multiplication \n 4.division ");
    scanf("%i", &ch);  
  printf("\n Please Enter the Values for two Operands: a and b  :  ");
    scanf("%d %d", &a, &b);
    if(ch == 1)
    {
      printf("\n sum  %d",  a + b);
    }
    else if(ch == 2)
    {
      printf("\n subtract %d",  a - b);
    }
    else if(ch ==3)
    {
      printf("\n multiply %d ", a * b);
    }
    else if(ch == 4)
    {
      printf("\n Divide %d ", a / b);
    }
    else
    {
      printf("\n You have enetered an Invalid Operator ");
  }
                                                                                                      
    
}