//         A SIMPLE CALCULATOR

#include <stdio.h>
void main()
{
    char operation;
    float num1, num2;
    printf("Enter the operation you want to perform (+,-,*,/,%%):");
    scanf("%c", &operation);
    printf("Enter two numbers :");
    scanf("%f   %f", &num1, &num2);
    switch (operation)
    {
    case '+':
        printf("The sum is %f", num1 + num2);
        break;
    case '-':
        printf("The difference is %f", num1 - num2);
        break;
    case '*':
        printf("The product is %.4f", num1 * num2);
        break;
    case '/':
        printf("The quotient is %.4f", num1 / num2);
        break;
    case '%':
        printf("The remainder is %d ",(int)num1 % (int)num2);
        break;
    default:
        printf("****************Invalid********************");
    }
}