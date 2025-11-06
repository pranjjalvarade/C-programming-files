//         IF AN EMPLOYEE HAS WORKED FOR MORE THAN 3 YEARS THEN GIVE BONUS

#include <stdio.h>
int main()
{

    int joining_year, current_year, service_years, salary;

    salary = 50000 ;

    printf("Enter the joining year and the current year :");
    scanf("%d%d", &joining_year, &current_year);

    service_years = current_year - joining_year;

    if (service_years >= 3)
        {
            salary = salary + 3500;
            printf("Your salary for this month is %d", salary);
        }
    else
        printf("Your salary for this month is %d", salary);

    return 0;
}