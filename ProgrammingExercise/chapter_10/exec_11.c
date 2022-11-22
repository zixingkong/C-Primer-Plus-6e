// 11.编写一个程序，声明一个int类型的3×5二维数组，并用合适的值初始化它。该程序打印数组中的值，然后各值翻倍（即是原值的2倍），并显示
// 出各元素的新值。编写一个函数显示数组的内容，再编写一个函数把各元素的值翻倍。这两个函数都以函数名和行数作为参数

#include <stdio.h>
void multi_arr(int arr[][5], int row);
void show_arr(int arr[][5], int row);

int main()
{
    int arr[][5] = {{1, 2, 3, 4, 5},
                    {6, 7, 8, 9, 10}};
    printf("The original array is:\n");
    show_arr(arr, 2);
    printf("After multi array is:\n");
    multi_arr(arr, 2);
    show_arr(arr, 2);
    return 0;
}

void multi_arr(int arr[][5], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = arr[i][j] * 2;
        }
    }
}

void show_arr(int arr[][5], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d \t", arr[i][j]);
        }
        printf("\n");
    }
}