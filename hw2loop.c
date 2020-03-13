#include<stdio.h>

void main()
{
         int a;
         for(a=70;a<=200;a++)
         {
                  if((a%5 == 0) && (a%25 != 0))
                           printf("%d\n",a);
         }
}
