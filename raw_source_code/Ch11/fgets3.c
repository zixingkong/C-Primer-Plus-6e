/*  fgets3.c  -- using fgets() */
/*
 * 该程序读取输入行，删除储存在字符串中的换行符，如果没有换行符，则丢弃数组装不下的字符
 */
#include <stdio.h>
#define STLEN 10
int main(void)
{
    char words[STLEN];
    int i;

    puts("Enter strings (empty line to quit):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[i] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else // must have words[i] == '\0'
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("done");
    return 0;
}
