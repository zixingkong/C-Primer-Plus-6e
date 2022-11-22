// 10.编写一个函数，把两个数组中相对应的元素相加，然后把结果储存到第 3 个数组中。也就是说，如果数组1中包含的值是2、4、5、8，数组2中
// 包含的值是1、0、4、6，那么该函数把3、4、9、14赋给第3个数组。函数接受3个数组名和一个数组大小。在一个简单的程序中测试该函数

#include <stdio.h>
void plus_arr(int arr1[], int arr2[], int result[], int len);

int main()
{
    int arr1[] = {0, 1, 2, 3, 4, 5};
    int arr2[] = {6, 7, 8, 9, 10};
    int result[5];
    plus_arr(arr1, arr2, result, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d \t", result[i]);
    }
}

void plus_arr(int arr1[], int arr2[], int result[], int len)
{
    for (int i = 0; i < len; i++)
    {
        result[i] = arr1[i] + arr2[i];
    }
}
