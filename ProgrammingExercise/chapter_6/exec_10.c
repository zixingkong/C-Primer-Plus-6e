#include <stdio.h>
int main(void)
{
    int down,up;
    printf("Enter lower and upper integer limits :");
    while(scanf("%d %d",&down,&up) == 2 && down < up )
    {
        int sum = 0;
        for(int i= down;i<=up;i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %d\n",down*down,up*up,sum);
        printf("Enter next set of limits : ");
    }
    return 0;
}
