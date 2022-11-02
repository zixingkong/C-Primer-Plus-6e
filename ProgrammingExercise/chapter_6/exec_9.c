#include <stdio.h>
float calculate(float f1,float f2);
int main(void)
{
    float f1,f2;
    float res;

    printf("Enter two floating-point numbers: ");
    while(scanf("%f %f",&f1,&f2) == 2)
    {
        res = calculate(f1,f2);
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n",f1,f2,f1,f2,res);
        printf("Enter two floating-point numbers (enter non-numeric to quit): ");
    }
    return 0;
}
float calculate(float f1,float f2)
{
    return (f1-f2)/(f1*f2);
}

