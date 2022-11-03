// 4.两数的调和平均数这样计算：先得到两数的倒数，然后计算两个倒数
// 的平均值，最后取计算结果的倒数。编写一个函数，接受两个double类型的
// 参数，返回这两个参数的调和平均数

#include <stdio.h>
double get_avg_reverse(double a, double b);

int main()
{
    double x = 2;
    double y = 4;
    double avg_reverse = get_avg_reverse(x, y);
    printf("%.2f and %.2f avg reverse is %.2f\n", x, y, avg_reverse);

    return 0;
}

double get_avg_reverse(double a, double b)
{
    double avg = (1 / a + 1 / b) / 2;
    return 1 / avg;
}