#include <stdio.h>

int main(void)
{
    float fn;
    printf("Please input a number : ");
    scanf("%f",&fn);
    printf("The input is %.1f or %.1e.\n",fn,fn);
    printf("The input is %+2.3f or %.3E.\n",fn,fn);
    return 0;
}
