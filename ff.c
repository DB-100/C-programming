#include <stdio.h>

int main() {
    int a,b;
     a=0;
     b=0;
    
    printf("Hello enter a no");
    scanf("%d ",&a);
    
    while(a>=1)
    {
        printf("%d \n ",a);
       a=a-1;
       b=b+a;
    }
    printf("the sum of series %i\n",b);
}