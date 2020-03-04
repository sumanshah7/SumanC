#include<stdio.h>

void main()
{
    int wa, T;
    T = 15000;
    printf("Enter amount to withdraw : ");
    scanf("%d",&wa);
    if(wa <= T)
    {
        if(wa <= 10000)
        {
            if(wa%500 != 0)
            {
                printf("Withdrawn amount invalid");
            }
            else
            {
                 T = T - wa;
                 printf("Withdraw Amount = %d",wa);
                 printf("\nBalance Left = %d",T);
            }
        }

        else
        {
            printf("Per Transaction limit exceeds.");
        }
    }
    else
    {
        printf("Insufficient Balance");
    }
}
