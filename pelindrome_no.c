//    CHECK IF THE GIVEN NUMBER IS A PELINDROME OR NOT

#include <stdio.h>
void main()
{
    int num, revnum;
    printf("Enter a 4 digit number here:");
    scanf("%d", &num);

    int num1, num2, num3, num4;

    num1 = num / 1000;
    num2 = (num / 100) % 10;
    num3 = (num / 10) % 10;
    num4 = num % 10;

    revnum = 1000 * num4 + 100 * num3 + 10 * num2 + num4;

    printf("The reverse number is %d\n", revnum);

    if (num == revnum)
        printf("The entered number is a pelindrome");
    else
        printf("The given number is not a pelindrome");
}