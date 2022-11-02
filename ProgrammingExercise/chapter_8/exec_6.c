// 6.修改程序清单8.8中的get_first()函数，让该函数返回读取的第1个非空白字符，并在一个简单的程序中测试
/* menuette.c -- menu techniques */
#include <stdio.h>
#include <ctype.h>
char get_first(void);

int main(void)
{
    int ch;

    printf("Test program for get_first():\n");
    printf("Enter a line; you should see the first non-whitespace\n");
    printf("character echoed in the terminal:\n");

    ch = get_first();
    printf("%c\n", ch);

    return 0;
}

char get_first(void)
{
    int ch, garbage;

    do
    {
        ch = getchar();
    } while (isspace(ch));

    while ((garbage = getchar()) != '\n' && garbage != EOF)
        ;

    return ch;
}
// char get_first(void)
// {
//     int ch;

//     ch = getchar();
//     while (getchar() != '\n')
//         continue;

//     return ch;
// }