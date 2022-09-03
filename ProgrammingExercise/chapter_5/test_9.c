#include <stdio.h>
void Temperatures(double st);

int main(void)
{
    double s;

    printf("This program converts fahrenheit to celsius and kelvin.\n");
	printf("Enter a temperature in degrees fahrenheit (q to quit): ");
    while(scanf("%lf",&s) == 1)
    {
        Temperatures(s);
    }
    return 0;
}
void Temperatures(double hs)
{
    float s,k;

    const double H_TO_S = 5.0 / 9.0;
    const double S_TO_K = 273.16;
    s = H_TO_S * (hs-32.0);
    k = s + S_TO_K;
    printf("摄氏温度: %.2f, 开氏温度: %.2f.\n",s,k);
}
