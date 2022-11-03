// 5.编写并测试一个函数larger_of()，该函数把两个double类型变量的值替
// 换为较大的值。例如， larger_of(x, y)会把x和y中较大的值重新赋给两个变量

#include <stdio.h>
void larger_of(double *x, double *y);

int main()
{
    double x = 3.0, y = 5.0;
    printf("before: x = %f, y = %f\n", x, y);
    larger_of(&x, &y);
    printf("after: x = %f, y = %f\n", x, y);
}

void larger_of(double *x, double *y)
{
    if (*x >= *y)
    {
        *y = *x;
    }
    else
    {
        *x = *y;
    }
}