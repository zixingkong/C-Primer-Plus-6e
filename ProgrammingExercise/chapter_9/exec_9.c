// 9.使用递归函数重写编程练习8

#include <stdio.h>
#include <stdlib.h>
double power(double x, int n);

int main()
{
    double base;
    int exponent;
    printf("Test power() function:\n");
    printf("Enter a :double: base and :int: exponent: ");
    while (scanf("%lf %d", &base, &exponent) == 2)
    {
        double res = power(base, exponent);
        printf("power(%.2f,%d) = %.2f\n", base, exponent, res);
        printf("Enter a :double: base and :int: exponent: ");
    }
    return 0;
}

double power(double num, int p)
{
    if (num == 0)
    {
        if (p == 0)
        {
            printf("Warning: 0 ^ 0 is undefined. Using 1.\n");
            return 1.0;
        }
        else
            return 0;
    }

    if (p > 0)
    {
        return num * power(num, abs(p) - 1);
    }
    else if (p == 0)
    {
        return 1.0;
    }
    else
    {
        return 1 / (num * power(num, abs(p) - 1));
    }
}