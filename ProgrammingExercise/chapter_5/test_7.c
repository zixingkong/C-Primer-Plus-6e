#include <stdio.h>
double cube(double num);
int main(void)
{
    float number,num;
    printf("Enter a number : ");
    scanf("%f",&num);
    number = cube(num);
    printf("%.2f",number);
}
double cube(double num)
{
    return num * num * num;
}
