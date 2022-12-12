/*
 2.修改并编程练习1的函数，在n个字符后停止，或在读到第1个空白、制表符或换行符时停止，哪个先遇到哪个停止。不能只使用scanf()
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 20

char *sgetchar(char *array, int n);

int main(void)
{
    char hello[SIZE] = "hello, ";
    int space = SIZE - strlen(hello) - 1;

    printf("What's your name ?(enter %d characters)\n", space);
    sgetchar(hello + 7, space);
    puts(hello);

    return 0;
}

char *sgetchar(char *array, int n)
{
    char ch;
    for (int i = 0; i < n; i++)
    {
        ch = getchar();
        if (ch == EOF || isspace(ch))
        {
            break;
        }
        // array[i] = ch;
        // 或者
        *(array + i) = ch;
    }
    return array;
}