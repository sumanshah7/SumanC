#include<stdio.h>

void main()
{
         int a,b,sum;

         printf("Enter 1st Number : ");
         scanf("%d",&a);
         printf("\n");
         while(a<=0)
         {
                  printf("Please Enter Positive Value : ");
                  scanf("%d",&a);
         }

         printf("Enter 2nd Number : ");
         scanf("%d",&b);
         printf("\n");
         while(b<=0)
         {
                  printf("Please Enter Positive Value : ");
                  scanf("%d",&b);
         }

         sum = a + b;
         printf("%d + %d = %d",a,b,sum);
         printf("\nThe sum of two number is %d",sum);

}
