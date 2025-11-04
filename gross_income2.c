//       CALCULATE THE GROSS SALARY

#include <stdio.h>
int main()
{
    float gs, bs, hra, da, pf;
    printf("Enter your basic salary here:");
    scanf("%f", &bs);
    if (bs < 10000)
    {
        hra = 0.15 * bs;
        da = 0.25 * bs;
        pf = 0.1 * bs;
    }
    else
    {
        hra = 0.15 * bs;
        da = 0.3 * bs;
        pf = 0.1 * bs;
    }
    gs = bs + hra + da - pf;
    printf("\n hra = %d", hra);
    printf("\n da = %d", da);
    printf("\n pf = %d", pf);
    printf("The Gross Salary is %f", gs);
    return 0;
}