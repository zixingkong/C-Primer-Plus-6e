// 10.为了让程序清单9.8中的to_binary()函数更通用，编写一个to_base_n()
// 函数接受两个在2～10范围内的参数，然后以第2个参数中指定的进制打印第
// 1个参数的数值。例如，to_base_n(129， 8)显示的结果为201，也就是129的
// 八进制数。在一个完整的程序中测试该函数。
#include <stdio.h>
void to_base_n(unsigned long n, int base);

int main()
{
    unsigned long number;
    int base;
    printf("Enter　an　integer　(q　to　quit):\n");
    while (scanf("%lu  %d", &number, &base) == 2)
    {
        printf("Base equivalent:   %lu,%d\n", number, base);
        to_base_n(number, base);
        putchar('\n');
        printf("Enter　an　integer　(q　to　quit):\n");
    }
    printf("Done.\n");
    return 0;
}

void to_base_n(unsigned long n, int base)
{
    int r;
    r = n % base;
    if (n >= base)
        to_base_n(n / base, base);
    putchar(r == 0 ? '0' : '1');
    return;
}
