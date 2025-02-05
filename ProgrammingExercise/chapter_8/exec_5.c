// 5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序
// 最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一
// 次猜测的值应是50和100中值，也就是75。如果这次猜大了，那么下一次猜
// 测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如
// 果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
/* guess.c -- 一个拖沓且错误的猜数字程序 */
#include <stdio.h>
int main(void)
{
    int upper_bound = 100;
    int lower_bound = 0;
    int guess = 50;
    int ch;
    printf("Pick an integer from 1 to 100. I will try to guess ");
    printf("it.\nRespond with a y if my guess is right, with a h if it's");
    printf("\ntoo high and an l if it's too low.\n");
    printf("Uh...is your number %d?\n", guess);
    while ((ch = getchar()) != 'y')
    {
        while (getchar() != '\n')
            ;
        if (ch == 'h')
        {
            upper_bound = guess;
        }
        else if (ch == 'l')
        {
            lower_bound = guess;
        }
        guess = (lower_bound + upper_bound) / 2;
        printf("Well, then, is it %d?\n", guess);
    }
    printf("I　knew　I　could　do　it!\n");
    return 0;
}