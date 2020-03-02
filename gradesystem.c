#include<stdio.h>

void main()
{
    float n;

    printf("Enter Your Score : ");

    scanf("%f",&n);

    if(n >= 80 && n<=100)
    {
        printf("Congratulations,You have obtained A grade.");
    }

    else if(n >= 60 && n <= 79)
    {
        printf("Congratulations,You have obtained C grade.");
    }

    else if(n >= 40 && n <= 59)
    {
        printf("Congratulations,You have obtained C grade.");
    }

    else if(n >= 0 && n <= 39)
    {
        printf("Sorry,You have failed.");
    }

}
