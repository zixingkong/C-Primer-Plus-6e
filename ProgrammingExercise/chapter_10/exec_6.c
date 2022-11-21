// 6.编写一个函数，把double类型数组中的数据倒序排列，并在一个简单的程序中测试该函数。

#include <stdio.h>
void bubble_sort(double arr[], int len);
void bubble_reverse_sort(double arr[], int len);
void exchange(double *a, double *b);

int main()
{
    double arr[] = {1.1, 5.5, 2.2, 3.3, 4.4, 9.9, 6.6, 7.7, 8.8, 10.1};
    printf("The original array is : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f\t", arr[i]);
    }
    bubble_reverse_sort(arr, 10);
    printf("\nAfter reverse sort array id :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f\t", arr[i]);
    }
    bubble_sort(arr, 10);
    printf("\nAfter sort array id :\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%.1f\t", arr[i]);
    }
}
// 使用冒泡发正序排序
void bubble_sort(double arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                exchange(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// 使用冒泡发倒序排序
void bubble_reverse_sort(double arr[], int len)
{
    for (int i = 0; i < len - 1; i++)
    {
        for (int j = len - 1; j > i; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                exchange(&arr[j], &arr[j - 1]);
            }
        }
    }
}

void exchange(double *a, double *b)
{
    double temp = *a;
    *a = *b;
    *b = temp;
}