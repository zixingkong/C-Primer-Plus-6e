// 5.编写一个函数，返回储存在double类型数组中最大值和最小值的差值，并在一个简单的程序中测试该函数。

#include <stdio.h>
double minus(double arr[], int len);

int main()
{
    double arr[10] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7, 8.8, 9.9, 10.1};
    printf("The max minus min in the array is %.1f\n", minus(arr, 10));
}

double minus(double arr[], int len)
{
    double result;
    double min = arr[0], max = arr[0];
    for (int i = 1; i < len; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    result = max - min;
    return result;
}