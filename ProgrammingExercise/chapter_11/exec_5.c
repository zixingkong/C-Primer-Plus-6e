/*
5.设计并测试一个函数，搜索第1个函数形参指定的字符串，在其中查找第2个函数形参指定的字符首次出现的位置。如果成功，该函数返指向该
字符的指针，如果在字符串中未找到指定字符，则返回空指针（该函数的功能与 strchr()函数相同）。在一个完整的程序中测试该函数，使用一个循环
给函数提供输入值。
 */

#include <stdio.h>
#define LIMIT 50

char *findchar(char *str, const char ch);

int main()
{
    char string[LIMIT];
    char *choice;
    char ch;
    printf("Enter a string to search: ");
    fgets(string, LIMIT, stdin);
    while (string[0] != '\n')
    {
        printf("Enter a character to search for: ");
        ch = getchar();
        if (ch != '\n')
        {
            while (getchar() != '\n')
            {
                continue;
            }
        }
        choice = findchar(string, ch);
        if (choice == NULL)
        {
            printf("Character %c not found in %s", ch, string);
        }
        else
        {
            printf("Character %c found at index %lu in %s", ch, choice - string, string);
        }
        printf("Enter a string to search(empty line to quit):");
        fgets(string, LIMIT, stdin);
    }
    puts("Bye");
    return 0;
}

char *findchar(char *str, const char ch)
{
    while (*str != '\0')
    {
        if (*str == ch)
        {
            return str;
        }
        str++;
    }
    return NULL;
}