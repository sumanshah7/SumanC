#include<stdio.h>

void main()
{
    int year;
    printf("Enter a year : ");
    scanf("%d",&year);
    if((year%400 == 0)||(year%4 == 0 && year%100 != 0))
    {
        printf("It is leap year.");
    }
    else
    {
        printf("It is not leap year.");
    }
}
