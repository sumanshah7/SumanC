#include<stdio.h>

void main()
{
         int i,j,flag=0;
         for(i=500;i<=600;i++)
         {
                  for(j=2;j<=i-1;j++)
                  {
                           if(i%j == 0)
                           {
                            flag = 0;
                            break;
                           }
                            else
                            {
                                     flag = 1;
                            }
                  }

                           if(flag == 1)
                           {
                                    printf("%d\n",i);
                           }

         }
}
