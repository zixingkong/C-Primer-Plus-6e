#include <stdio.h>
int main(void)
{
    const int MAX_NUM = 150;
    int num_friends = 5;
    int week = 0;

    printf("Week | Friends\n");
	printf("-----+--------\n");
    while(num_friends<MAX_NUM)
    {
        printf("%4d | %7d\n", week, num_friends);
        week++;
        num_friends -= week;
        num_friends *= 2;
    }
    return 0;

}
