//           CALCULATES HOW MUCH IS THE OVERTIME PAYMENT FOR AN EMPLOYEE


#include<stdio.h>
void main(){
        int total_hr , reg_hr, overtime_hr , extra_payment, deduction, less_hr;

        reg_hr = 40 ;
        printf("Enter the total number of hours you have worked this week:");
        scanf("%d", &total_hr);

        overtime_hr = total_hr - reg_hr ;

        if (overtime_hr > 0)
        {
            extra_payment = 12 * overtime_hr ;
            printf ("Your extra payment for overtime is %dRs", extra_payment);
        }
        else 
        {
            if ( overtime_hr == 0)
            printf("You have not done any overtime .");
            else
            {
                less_hr = reg_hr - total_hr;
                deduction = less_hr * 6;
                printf("The deduction in your payment is %dRs.", deduction);
            }    
        }

} 