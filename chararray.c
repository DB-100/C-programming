#include <stdio.h>
int main()
{
  char p[50];
  int a = 0;

  printf("Enter a string");
  scanf("%[^\n]",p);

  while (p[a] != '\0')
    a=a+1;

  printf("Length of the string: %d\n", a);

  return 0;
}
