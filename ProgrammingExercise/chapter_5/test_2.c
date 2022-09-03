#include <stdio.h>

int main(void)
{
    int num,i;
    printf("Enter number :");
    scanf("%d", &num);
    i = num;
    while(i <= num+10)
    {
        printf("%d \t",i);
        i++;
    }
    return 0;
}
