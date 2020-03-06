#include<stdio.h>

void main()
{
    float A,B;
    char ch;
    printf("Enter any two number :\n");
    scanf("%f%f",&A,&B);
    printf("Press \n+ to Add\n- to Subtract\n* to Multiply\n/ to Divide\n Select : ");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+' :
        printf("%.2f + %.2f = %.2f",A,B,A+B);
        break;

    case '-' :
        printf("%.2f - %.2f = %.2f",A,B,A-B);
        break;

    case '*' :
        printf("%.2f * %.2f = %.2f",A,B,A*B);
        break;

    case '/' :
        printf("%.2f / %.2f = %.2f",A,B,A/B);
        break;

    default :
        printf("Invalid Option!");
    }
}
