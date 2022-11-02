// 7.修改第7章的编程练习8，用字符代替数字标记菜单的选项。用q代替5 作为结束输入的标记。
#include <stdio.h>
#include <stdbool.h>

#define RATE_1 8.75
#define RATE_2 9.33
#define RATE_3 10.00
#define RATE_4 11.20

#define OVERTIME_HOURS 40.0
#define OVERTIME_MULTIPLIER 1.5
#define TAX_RATE_1 0.15
#define TAX_BRACKET_1 300.0
#define TAX_RATE_2 0.20
#define TAX_BRACKET_2 450.0
#define TAX_RATE_3 0.25

void flush_input_buffer(void);
float calculate_gross_pay(float hours, float rate);
float calulate_taxes(float gross_pay);

int main(void)
{
    bool exit_flag = false;
    char rate_option;
    float rate, hours, gross_pay, taxes;

    while (1)
    {
        printf("**********************************************************************\n");
        printf("a)  $%.2f/hr\tb)  $%.2f/hr\n", RATE_1, RATE_2);
        printf("c)  $%.2f/hr\td)  $%.2f/hr\n", RATE_3, RATE_4);
        printf("q)  quit\n");
        printf("**********************************************************************\n");

        scanf("%c", &rate_option);
        switch (rate_option)
        {
        case ('a'):
            rate = RATE_1;
            break;
        case ('b'):
            rate = RATE_2;
            break;
        case ('c'):
            rate = RATE_3;
            break;
        case ('d'):
            rate = RATE_4;
            break;
        case ('q'):
            exit_flag = true;
            break;
        default: // invalid input
            flush_input_buffer();
            printf("Please enter an char between a and d.\n\n");
            continue;
        }

        if (exit_flag)
        {
            break;
        }

        printf("Enter number of hours worked in a week: ");
        while (scanf("%f", &hours) != 1 || hours <= 0)
        {
            flush_input_buffer();
            printf("Please enter a positive number. \n");
            printf("Enter number of hours worked in a week: ");
        }

        gross_pay = calculate_gross_pay(hours, rate);
        taxes = calulate_taxes(gross_pay);

        printf("For %.1f hours of work at $%.2f/hr, you make $%.2f and pay"
               " $%.2f in taxes.\n",
               hours, rate, gross_pay, taxes);
        printf("\n");
    }
    printf("Bye.\n");
    return 0;
}
void flush_input_buffer(void)
{
    while (getchar() != '\n')
        ;
}

float calculate_gross_pay(float hours, float rate)
{
    if (hours > OVERTIME_HOURS)
        return OVERTIME_HOURS * rate + (hours - OVERTIME_HOURS) * rate * OVERTIME_MULTIPLIER;
    else
        return hours * rate;
}

float calulate_taxes(float gross_pay)
{
    if (gross_pay > TAX_BRACKET_2)
        return TAX_RATE_3 * (gross_pay - TAX_BRACKET_2) + TAX_RATE_2 * (TAX_BRACKET_2 - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
    else if (gross_pay > TAX_BRACKET_1)
        return TAX_RATE_2 * (gross_pay - TAX_BRACKET_1) + TAX_RATE_1 * TAX_BRACKET_1;
    else
        return TAX_RATE_1 * gross_pay;
}
