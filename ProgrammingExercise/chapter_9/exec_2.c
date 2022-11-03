// 2.设计一个函数chline(ch, i, j)，打印指定的字符j行i列。在一个简单的驱
// 动程序中测试该函数
#include <stdio.h>
void chline(char ch, int i, int j);
int main()
{
    chline('*', 3, 5);
    return 0;
}

void chline(char ch, int i, int j)
{
    for (int x = 0; x < j; x++)
    {
        for (int y = 0; y < i; y++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}
