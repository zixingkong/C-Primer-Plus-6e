// 1.设计一个函数min(x, y)，返回两个double类型值的较小值。在一个简单
// 的驱动程序中测试该函数

#include <stdio.h>
double min(double x, double y);

int main()
{
    float x = 3.5;
    float y = 4.5;
    float res = min(x, y);
    printf("the min is %.2f\n", res);
}

double min(double x, double y)
{
    return x < y ? x : y;
}