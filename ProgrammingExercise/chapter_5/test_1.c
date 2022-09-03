#include <stdio.h>
#define M_TO_H 60

int main(void)
{
    int minute, hour, left;
    printf("This program converts minutes to hour and minutes .\n");
    printf("Just enter the number of minutes.\n");
    printf("Enter 0 or number less than 0 to end the program.\n");
    scanf("%d",&minute);
    while(minute > 0)
    {
        hour = minute / M_TO_H;
        left = minute % 60;
        printf("%d minute is %d hour, %d minute. \n",minute, hour,left);
        printf("Next input?\n");
        scanf("%d",&minute);
    }
    printf("Bye!\n");
    return 0;
}
