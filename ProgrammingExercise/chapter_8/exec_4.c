// 4.编写一个程序，在遇到EOF之前，把输入作为字符流读取。该程序要
// 报告平均每个单词的字母数。不要把空白统计为单词的字母。实际上，标点
// 符号也不应该统计，但是现在暂时不同考虑这么多（如果你比较在意这点，
// 考虑使用ctype.h系列中的ispunct()函数）。
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
    int ch;
    bool in_word = false;
    int letter_count = 0, word_count = 0;
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            letter_count++;
            if (!in_word)
            {
                in_word = true;
                word_count++;
            }
        }
        else
        {
            in_word = false;
        }
    }
    printf("letter_count: %d , word_count: %d\n", letter_count, word_count);
    printf("Average letters per word: %.2f\n", (float)letter_count / word_count);
    return 0;
}