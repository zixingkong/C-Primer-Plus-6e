#include <stdio.h>
int main(void)
{
    int count,sum,number;

    count = 0;
    sum = 0;
    printf("Enter a number : ");
    scanf("%d",&number);
    while(count++<number)
    {
        sum = sum + count * count;
    }
    printf("sum = %d\n",sum);
    return 0;
}

