/*
4.设计并测试一个函数，它类似编程练习3的描述，只不过它接受第2个参数指明可读取的最大字符数
*/
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 20

char *getword(char *target, int max);

int main()
{
    char hello[SIZE] = "Hello, ";
    printf("Whate's your name ?\n");
    getword(hello + 7, 5);

    puts(hello);
    return 0;
}

char *getword(char *target, int max)
{
    char ch;
    int i = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF && i < max)
    {
        if (isspace(ch))
        {
            if (inword)
            {
                break;
            }
            else
            {
                continue;
            }
        }
        if (!inword)
        {
            inword = true;
        }
        *(target + i) = ch;
        i++;
    }

    if (ch != '\n')
    {
        while ((ch = getchar()) != '\n')
        {
            continue;
        }
    }
    return target;
}