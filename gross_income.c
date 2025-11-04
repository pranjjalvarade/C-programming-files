//       CALCULATE THE GROSS SALARY

#include <stdio.h>
int main()
{
    float gs, bs, hra, da, pf;
    printf("Enter your basic salary here:");
    scanf("%f", &bs);
    hra = bs * 0.1;
    da = bs * 0.3;
    pf = bs * 0.1;
    gs = bs + hra + da - pf;
    printf("The Gross Salary is %f", gs) return 0;
}