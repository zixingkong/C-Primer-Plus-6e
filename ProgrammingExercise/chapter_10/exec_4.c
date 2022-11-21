// 4.编写一个函数，返回储存在double类型数组中最大值的下标，并在一个简单的程序中测试该函数。

#include <stdio.h>
int max_index(double array[], int length);

int main()
{
    double arr[] = {1.1, 2.2, 3.3, 6.6, 4.4, 5.5};
    printf("The max index is %d\n", max_index(arr, 6));
}

int max_index(double array[], int length)
{
    int max_ind = 0;
    for (int index = 0; index < length; index++)
    {
        if (array[max_ind] < array[index])
        {
            max_ind = index;
        }
    }
    return max_ind;
}