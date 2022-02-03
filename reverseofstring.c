#include <stdio.h>


void main()
{
    int a,b,len=0;
    char p[50],k[50];
    
    printf("\n Enter String to Reverse : " );
    scanf("%[^\n]",p);
    for(a=0; p[a]!='\0'; a=a+1)
    {
        len=len+1;
    }
 
    b=0;
    for(a=len-1; a>=0; a=a-1)
    {
        k[b=b+1]=p[a];
    }
    printf("\n Reverse of String is: %s",k);
    
  
}
