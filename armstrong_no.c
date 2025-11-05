//       CHECKS IF A NUMBER IS ARMSTRONG NUMBER OR NOT

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    int num, d1, d2, d3, d4, numplaces, pow_sum;

    do
    {
        printf("How many digits does the test number have? (3 / 4) ");
        scanf("%d", &numplaces);

        if (numplaces != 3 && numplaces != 4)
            printf("Invalid number . Please enter 3 or 4 .\n");
    } while (numplaces != 3 && numplaces != 4);

    printf("Enter the test number:");
        scanf("%d", &num);

    // switch (numplaces)
    // {
    // case 3:
    // {
    //     printf("Enter the test number :");
    //     scanf("%d", &num);
    // }
    // break;
    // case 4:
    // {
    //     printf("Enter the test number :");
    //     scanf("%d", &num);
    // }
    // break;
    // default:
    //     printf("INVALID NUMBER\n");
    //     exit (0);
    // }

    if (numplaces == 3)
    {
        d1 = num / 100;
        d2 = (num / 10) % 10;
        d3 = num % 10;
        pow_sum = pow(d1, numplaces) + pow(d2, numplaces) + pow(d3, numplaces);
        printf("The sum of the digits raised to the number of digits is %d", pow_sum);
    }
    else
    {
        d1 = num / 1000;
        d2 = (num / 100) % 10;
        d3 = (num / 10) % 10;
        d4 = num % 10;
        pow_sum = pow(d1, numplaces) + pow(d2, numplaces) + pow(d3, numplaces) + pow(d4, numplaces);
        printf("The sum of the digits raised to the number of digits is %d", pow_sum);
    }

    if (num == pow_sum)
        printf("\nTherefore , the given number is an Armstrong number.");
    else
        printf("\nTherefore , the given number is not an Armstrong number.");
}