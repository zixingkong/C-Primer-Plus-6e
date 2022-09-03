#include <stdio.h>

void main(void)
{
    int age;
    float secondsPerYear = 3.156e7;
    printf("Enter your age: ");
    scanf("%d",&age);
    printf("You have live %f seconds.\n",age * secondsPerYear);
}
