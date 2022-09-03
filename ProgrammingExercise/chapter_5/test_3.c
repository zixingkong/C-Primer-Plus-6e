#include <stdio.h>
int main(void)
{
    const D_PER_W = 7;
    int day,week,left;
    printf("This program converts days to weeks and days.\n");
    printf("Just enter the number of days.\n");
    printf("Enter 0 or number less than 0 to end the program.\n");
    scanf("%d",&day);
    while(day>0)
    {
        week = day / D_PER_W;
        left = day % D_PER_W;
        printf("%d day is %d week, %d day.\n",day, week, left);
        printf("Next input?\n");
        scanf("%d",&day);
    }
    printf("Bye!\n");
    return 0;
}
