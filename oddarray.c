#include<stdio.h>

void main()
{
         int num[10],i;
         printf("Enter 10 Number : \n");
         for(i=0;i<=9;i++)
         {
                  printf("num[%d] = ",i);
                  scanf("%d",&num[i]);
         }
         printf("\n\nThe Odd Values are : \n");
         for(i=0;i<=9;i++)
         {
                  if(num[i]%2!=0)
         {
                  printf("%d, ",num[i]);
         }
         }

}
//Find Maximum and Minimum and Sum of Odd number
//Do same with Even Number
//Then DO same with both in one
