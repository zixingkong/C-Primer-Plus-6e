// 7.编写一个函数，从标准输入中读取字符，直到遇到文件结尾。程序要
// 报告每个字符是否是字母。如果是，还要报告该字母在字母表中的数值位
// 置。例如，c和C在字母表中的位置都是3。合并一个函数，以一个字符作为
// 参数，如果该字符是一个字母则返回一个数值位置，否则返回-1。

#include <stdio.h>
#include <ctype.h>
int get_postion(char ch);

int main()
{
    int ch;
    int pos;
    while ((ch = getchar()) != EOF)
    {
        if ((pos = get_postion(ch)) == -1)
        {
            printf("%c is not a letter\n", ch);
        }
        else
        {
            printf("%c is a letter: location = %d\n", ch, location);
        }
    }
    return 0;
}

int get_postion(char ch)
{
    if (isalpha(ch))
    {
        ch = tolower(ch);
        return ch - 'a' + 1;
    }
    else
    {
        return -1;
    }
}
