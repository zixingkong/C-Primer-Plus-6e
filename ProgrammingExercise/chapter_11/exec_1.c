/*
1.设计并测试一个函数，从输入中获取下n个字符（包括空白、制表符、换行符），把结果储存在一个数组里，它的地址被传递作为一个参数
*/

#include <stdio.h>
#include <string.h>
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
        if ((ch = getchar()) == EOF)
        {
            break;
        }
        // array[i] = ch;
        // 或者
        *(array + i) = ch;
    }
    return array;
}