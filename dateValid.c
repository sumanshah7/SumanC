#include<stdio.h>

void main()
{
    int Y, M, D;
    printf("Enter a Date [YYYY-MM-DD] : ");
    scanf("%d-%d-%d",&Y,&M,&D);
    printf("Year = %d\nMonth = %d\nDay= %d",Y,M,D);
    if(Y >= 1000 && Y <=9999)
    {
       if(M >=1 && M <= 12)
       {
           if(D >=1 && D <= 30)
           {
              printf("\nThe date %d-%d-%d is Valid Date",Y,M,D);
           }
           else
           {
               printf("\nInvalid Day");
           }
       }
       else
       {
           printf("\nInvalid Month");
       }
    }
    else
    {
        printf("Invalid Year");
    }

}
