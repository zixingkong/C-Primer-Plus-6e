// 3.编写一个函数，返回储存在int类型数组中的最大值，并在一个简单的程序中测试该函数

#include <stdio.h>
int max(int *ptr, int len);

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 10, 7, 8, 9, 6};
    printf("The max number of elements in the array is %d\n", max(arr, 11));
    return 0;
}

int max(int *ptr, int len)
{
    int max_num;
    for (int i = 0; i < len; i++)
    {
        if (max_num < *(ptr + i))
        {
            max_num = *(ptr + i);
        }
    }
    return max_num;
}