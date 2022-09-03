#include <stdio.h>
#define BASE_SALARY 10.00
#define OVERTIME_HOURS 40.0
#define OVERTIME_SALARY 1.5
#define LEVEL_1 0.15
#define LEVEL_2 0.20
#define LEVEL_3 0.25
#define TAX_BRACKET_1 300.0
#define TAX_BRACKET_2 450.0
int main(void)
{
    int hours;
    float sum_salary = 0, tax = 0,net_income = 0;

    printf("Enter work hours : ");
    if(scanf("%d",&hours) == 1)
    {
        if(hours>OVERTIME_HOURS)
        {
            sum_salary = OVERTIME_HOURS * BASE_SALARY + (hours-OVERTIME_HOURS) * OVERTIME_SALARY * BASE_SALARY;
        }
        else
        {
            sum_salary = hours * BASE_SALARY;
        }

        if(sum_salary>TAX_BRACKET_2)
        {
            tax = TAX_BRACKET_1 * LEVEL_1 + (TAX_BRACKET_2-TAX_BRACKET_1) * LEVEL_2 + (sum_salary-TAX_BRACKET_2) * LEVEL_3;
        }
        else if(sum_salary>TAX_BRACKET_1)
        {
            tax = TAX_BRACKET_1 * LEVEL_1 + (sum_salary-TAX_BRACKET_1) * LEVEL_2;
        }
        else
        {
            tax = sum_salary * LEVEL_1;
        }
        net_income = sum_salary - tax;
        printf("sum salary = %f, tax = %f, net income = %f",sum_salary,tax,net_income);
    }
    else
    {
        printf("Invalid input,terminating...");
    }
    return 0;
}
