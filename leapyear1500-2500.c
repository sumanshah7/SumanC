#include<stdio.h>

void main()
{
         int l;
         for(l=1500;l<=2500;l++)
         {
                  if(((l%4 == 0) && (l%100 != 0)) || (l%400 == 0))
                  printf("%d\n",l);

         }
}
