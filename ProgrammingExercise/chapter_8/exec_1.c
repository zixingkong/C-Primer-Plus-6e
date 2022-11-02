/* echo.c --重复输入*/
// 1.设计一个程序，统计在读到文件结尾之前读取的字符数
#include <stdio.h>
int main(void)
{
    int ch;
    int num;
    while ((ch = getchar()) != EOF)
    {
        if (ch != '\n' && ch != '\r' && ch != ' ')
        {
            num++;
        };
    }
    printf("字符数量为: %d\n", num);
    return 0;
}
