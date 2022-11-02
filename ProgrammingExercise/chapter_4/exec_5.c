#include <stdio.h>
int main(void)
{
    float speed;
    float filesize;
    printf("Enter the speed : ");
    scanf("%f",&speed);
    printf("Enter the filesize : ");
    scanf("%f",&filesize);
    printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds.\n",speed,filesize,filesize/speed);
    return 0;
}
