// 11.编写并测试Fibonacci()函数，该函数用循环代替递归计算斐波那契数。

#include <stdio.h>
long Fibonacci(long n);

int main()
{
    long num;
    printf("Enter an integer n: ");
    while (scanf("%ld", &num) == 1)
    {
        printf("Fibonacci #%ld = %ld\n", num, Fibonacci(num));

        printf("Enter an integer n: ");
    }
}
long Fibonacci(long n)
{
    if (n < 1)
    {
        printf("Error: n must be a positive integer");
        return -1;
    }
    long fib_n1 = 1, fib_n2 = 1, fib_n = 2;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;
    for (long i = 3; i < n; i++)
    {
        fib_n1 = fib_n2;
        fib_n2 = fib_n;
        fib_n = fib_n1 + fib_n2;
    }
    return fib_n;
}