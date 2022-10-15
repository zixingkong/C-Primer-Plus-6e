// 3.编写一个程序，在遇到     EOF  之前，把输入作为字符流读取。该程序
// 要报告输入中的大写字母和小写字母的个数。假设大小写字母数值是连续
// 的。或者使用ctype.h库中合适的分类函数更方便

#include <stdio.h>
#include <ctype.h>
int main()
{
    int ch = 0;
    int super = 0, lower = 0;
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
        {
            super++;
        }
        else if (islower(ch))
        {
            lower++;
        }
    }
    printf("super: %d, lower: %d\n", super, lower);

    return 0;
}

// #include <stdio.h>
// #include <ctype.h>

// int main(void)
// {
//     int ch;
//     int uppercase_count = 0, lowercase_count = 0, other_count = 0;

//     while ((ch = getchar()) != EOF)
//     {
//         if (isupper(ch))
//             uppercase_count++;
//         else if (islower(ch))
//             lowercase_count++;
//         else
//             other_count++;
//     }

//     printf("Character Counts\n");
//     printf("Uppercase letters: %d\n", uppercase_count);
//     printf("Lowercase letters: %d\n", lowercase_count);
//     printf("Other: %d\n", other_count);

//     return 0;
// }