/*
3.设计并测试一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。该函数应该跳过第1个非空白字符前面的所有空白。
将一个单词定义为没有空白、制表符或换行符的字符序列。
*/

#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 20

char *getword(char *target);

int main()
{
    char hello[SIZE] = "Hello, ";
    printf("Whate's your name ?\n");
    getword(hello + 7);

    puts(hello);
    return 0;
}

char *getword(char *target)
{
    char ch;
    int i = 0;
    bool inword = false;

    while ((ch = getchar()) != EOF)
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