#include <stdio.h>
#include <float.h>
int main(void)
{
    double x = 1.0/3.0;
    float y = 1.0/3.0;
    printf("\n\ta = %.6f \t\t\tb = %.6f\n",x,y);
    printf("\n\ta = %.12f \t\tb = %.12f\n",x,y);
    printf("\n\ta = %.16f \t\tb = %.16f\n",x,y);
    printf("\n\tdouble 类型最少有效数字位数:%d\tfloat 类型最少有效数字位数:%d\n\n",DBL_DIG,FLT_DIG);
    return 0;
}

