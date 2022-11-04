// 6.编写并测试一个函数，该函数以3个double变量的地址作为参数，把最
// 小值放入第1个函数，中间值放入第2个变量，最大值放入第3个变量

#include <stdio.h>
void position(double *min, double *mid, double *max);
void change(double *x, double *y);

int main()
{
    double x, y, z;

    printf("test sort variables: \n");
    printf("enter three numbers: x, y, z\n");

    while (scanf("%lf %lf %lf", &x, &y, &z) == 3)
    {
        printf("\n");
        printf("before position: x, y, z\n");
        printf("x = %f, y = %f, z = %f\n", x, y, z);
        position(&x, &y, &z);
        printf("\n");
        printf("After calling sort_variables:\n");
        printf("x = %f, y = %f, z = %f\n", x, y, z);
        printf("\n");
        printf("enter three numbers: x, y, z\n");
    }
}

void position(double *x, double *y, double *z)
{
    if ((*x) <= (*y))
    {
        if ((*y) >= (*z))
        {
            if ((*x) >= (*z))
            {
                change(z, x);
                change(z, y);
            }
            else
            {
                change(z, y);
            }
        }
    }
    else
    {
        if ((*y) >= (*z))
        {
            change(z, x);
        }
        else
        {
            if ((*x) >= (*z))
            {
                change(x, y);
                change(y, z);
            }
            else
            {
                change(x, y);
            }
        }
    }
}

void change(double *x, double *y)
{
    double a = *y;
    *y = *x;
    *x = a;
}