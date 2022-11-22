// 8.使用编程练习2中的拷贝函数，把一个内含7个元素的数组中第3～第5 个元素拷贝至内含3个元素的数组中。该函数本身不需要修改，只需要选择
// 合适的实际参数（实际参数不需要是数组名和数组大小，只需要是数组元素的地址和待处理元素的个数）。

#include <stdio.h>
void copy_ptr(int *target, int *source, int len);

int main()
{
    int sou[] = {0, 1, 2, 3, 4, 5, 6};
    int tar[3];
    copy_ptr(tar, sou + 2, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%d \t", tar[i]);
    }
    return 0;
}

void copy_ptr(int *target, int *source, int len)
{
    for (int i = 0; i < len; i++)
    {
        *(target + i) = *(source + i);
    }
}