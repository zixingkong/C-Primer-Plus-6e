// 7.编写一个程序，初始化一个double类型的二维数组，使用编程练习2中的一个拷贝函数把该数组中的数据拷贝至另一个二维数组中（因为二维数组
// 是数组的数组，所以可以使用处理一维数组的拷贝函数来处理数组中的每个子数组）。

#include <stdio.h>
void copy_arr(double *target, double *source, int arr_len);

int main()
{
    double sou[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9}};
    double tar[3][3];
    for (int i = 0; i < 3; i++)
    {
        copy_arr(tar[i], sou[i], 3);
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%.f \t", sou[i][j]);
        }
        printf("\n");
    }
}

void copy_arr(double *target, double *source, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        target[i] = source[i];
    }
}