// 8. 编写一个名为string_in()的函数，接受两个指向字符串的指针作为参数。如果第2个字符串中包含第1个字符串，该函数将返回第1个字符串开始的地址。
// 例如，string_in("hats", "at")将返回hats中a的地址。否则，该函数返回空指针。在一个完整的程序中测试该函数，使用一个循环给函数提供输入值。

#include <stdio.h>

#define LIMIT 50
char *string_in(char *s1, char *s2);
char *get(char *string, int n);

int main()
{
    // test string_in()

    char string[LIMIT];
    char substring[LIMIT];

    char *substr_loc;

    printf("Enter a string: ");
    get(string, LIMIT);
    while (string[0] != '\0')
    {
        printf("Enter a substring to look for: ");
        get(substring, LIMIT);

        substr_loc = string_in(string, substring);

        if (substr_loc == NULL)
            printf("%s not in %s\n", substring, string);
        else
            printf("%s found in %s at index %lu\n",
                   substring, string, substr_loc - string);

        printf("Enter a string (empty line to quit): ");
        get(string, LIMIT);
    }

    puts("Bye");

    return 0;
}
char *string_in(char *s1, char *s2)
{
    while (*s1 != '\0')
    {
        int i = 0;
        while (*(s1 + i) == *(s2 + i))
        {
            i++;
            if (s2[i] == '\0')
            {
                return s1;
            }
        }
        s1++;
    }
    return NULL;
}

char *get(char *string, int n)
{
    char *return_value = fgets(string, n, stdin);

    while (*string != '\0')
    {
        if (*string == '\n')
        {
            *string = '\0';
            break;
        }
        string++;
    }
    return return_value;
}