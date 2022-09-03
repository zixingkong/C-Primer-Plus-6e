#include <stdio.h>
int main(void)
{
    float f1,f2;
    printf("Enter two floating-point numbers: ");
    scanf("%f %f",&f1,&f2);
    do
    {
        printf("(%.3f - %.3f) / (%.3f * %.3f) = %.3f\n",f1,f2,f1,f2,(f1-f2)/(f1*f2));
        printf("Enter two floating-point numbers (enter non-numeric to quit): ");
    }while(scanf("%f %f",&f1,&f2) == 2);
    return 0;
}
