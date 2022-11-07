// 8.第6章的程序清单6.20中，power()函数返回一个double类型数的正整数
// 次幂。改进该函数，使其能正确计算负幂。另外，函数要处理0的任何次幂
// 都为0，任何数的0次幂都为1（函数应报告0的0次幂未定义，因此把该值处
// 理为1）。要使用一个循环，并在程序中测试该函数

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
    double result = 1.0;
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
    for (int i = 0; i < abs(p); i++)
    {
        result *= num;
    }
    if (p < 0)
    {
        result = 1 / result;
    }
    return result;
}
