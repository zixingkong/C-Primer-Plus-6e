// sum_arr1.c -- sums the elements of an array
// use %u or %lu if %zd doesn't work
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    // marbles不是数组名就是数组首元素的地址吗，为什么大小是40字节？数组名、数组本身和数组首元素地址是什么关系？
    // 1. 一般情况下声明一个数组之后，比如 int array[5]，数组名 array 就是数组首元素的首地址，而且是一个地址常量。但是，在函数声明的形参列表中除外。
    // 2. 在 C 中， 在几乎所有使用数组的表达式中，数组名的值是个指针常量，也就是数组第一个元素的地址。 它的类型取决于数组元素的类型： 如果它们是 int 类型，那么数组名的类型就是 “指向 int 的常量指针 “。——《C 和指针》
    // 3. 在以下两种场合下，数组名并不是用指针常量来表示，就是当数组名作为 sizeof 操作符和单目操作符 & 的操作数时。 sizeof 返回整个数组的长度，而不是指向数组的指针的长度。 取一个数组名的地址所产生的是一个指向数组的指针，而不是一个指向某个指针常量的指针。所以 & a 后返回的指针便是指向数组的指针，跟 a（一个指向 a[0] 的指针）在指针的类型上是有区别的。——《C 和指针》
    // 4. “+1” 就是偏移量问题：一个类型为 T 的指针的移动，是以 sizeof(T) 为移动单位。
    // 即 array+1：在数组首元素的首地址的基础上，偏移一个 sizeof(array[0]) 单位。此处的类型 T 就是数组中的一个 int 型的首元素。由于程序是以 16 进制表示地址结果，array+1 的结果为：0012FF34+1sizeof(array[0])=0012FF34+1sizeof(int)=0012FF38。
    // 即 **&array+1**：在数组的首地址的基础上，偏移一个 sizeof(array) 单位。此处的类型 T 就是数组中的一个含有 5 个 int 型元素的数组。由于程序是以 16 进制表示地址结果，&array+1 的结果为：0012FF34+1sizeof(array)=0012FF34+1sizeof(int)5=0012FF48。注意 1sizeof(int)*5（等于 00000014）要转换成 16 进制后才能进行相加。
    printf("The size of marbles is %zd bytes.\n",
           sizeof marbles);

    return 0;
}

int sum(int ar[], int n) // how big an array?
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);

    return total;
}
