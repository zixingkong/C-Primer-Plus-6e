#include <stdio.h>
int main(void)
{
    long int times;
    float sum1,sum2;
    float sign = 1.0f;

    printf("Enter times : ");
    while(scanf("%ld",&times) && times > 0)
    {
        sum1 = 0;
        sum2 = 0;
        for(long int i=1;i<=times;i++)
        {
                sum1 += 1.0f/i;
                sum2 += (1.0f/i) * sign;
                sign = -sign;
        }
        printf("sum1 = %.5f\n",sum1);
        printf("sum2 = %.5f\n",sum2);
    }
    return 0;
}
