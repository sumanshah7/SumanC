#include<stdio.h>

void main()
{
         int s = 1,n;
         printf("Kun wanza?\nMultiple of ");
         scanf(" %d",&n);
         while(s<=10)
         {
                  printf("%d x %d = %d\n",s,n,s*n);
                  s++;
         }
}
