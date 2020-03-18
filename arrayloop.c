#include<stdio.h>

void main()
{
         int num[10],i;
         printf("Enter 10 values : \n");
         for(i=0;i<=9;i++)
         {
                  printf("num[%d] = ",i);
                  scanf("%d",&num[i]);
         }
         printf("\n\nThe values are : \n");
         for(i=0;i<=9;i++)
         {
                  printf("value %d = %d\n",i+1,num[i]);
         }
}
