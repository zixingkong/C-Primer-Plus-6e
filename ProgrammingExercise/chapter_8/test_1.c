/* echo.c --重复输入*/
#include <stdio.h>
int main(void)
{
    int ch;
    int num;
    while((ch=getchar()) != EOF)
    {
        if (ch != '\n' &&  ch != '\r' && ch != ' '){
            num++;
        };
    }
    printf("字符数量为: %d\n", num);
    return 0;
}
