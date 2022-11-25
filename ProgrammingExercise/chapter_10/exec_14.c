// 14.以变长数组作为函数形参，完成编程练习13。
// 13.编写一个程序，提示用户输入3组数，每组数包含5个double类型的数（假设用户都正确地响应，不会输入非数值数据）。该程序应完成下列任务。
// a.把用户输入的数据储存在3×5的数组中
// b.计算每组（5个）数据的平均值
// c.计算所有数据的平均值
// d.找出这15个数据中的最大值
// e.打印结果
// 每个任务都要用单独的函数来完成（使用传统C处理数组的方式）。完成任务b，要编写一个计算并返回一维数组平均值的函数，利用循环调用该
// 函数3次。对于处理其他任务的函数，应该把整个数组作为参数，完成任务c和d的函数应把结果返回主调函数
#include <stdio.h>
void get_array(int rows, int cols, double arr[rows][cols]);
double get_five_average(double *arr, int cols);
double get_avg(int rows, int cols, double arr[rows][cols]);
double get_max(int rows, int cols, double arr[rows][cols]);

int main()
{
    double arr[3][5];
    // double arr[3][5] = {{1.1, 2.2, 3.3, 4.4, 5.5}, {6.6, 7.7, 8.8, 9.9, 10.10}, {11.11, 12.12, 13.13, 14.14, 15.15}};
    get_array(3, 5, arr);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.1f \t", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < 3; i++)
    {
        printf("The %d row avg is %.2f\n", i + 1, get_five_average(arr[i], 5));
    }
    printf("The avg is %.2f\n", get_avg(3, 5, arr));
    printf("The max is %f\n", get_max(3, 5, arr));
}

void get_array(int rows, int cols, double arr[rows][cols])
{
    for (int i = 0; i < rows; i++)
    {
        printf("The %d row number: \n", i + 1);
        for (int j = 0; j < cols; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}

double get_five_average(double *arr, int cols)
{
    double sum = 0;
    double avg;
    for (int i = 0; i < cols; i++)
    {
        sum += arr[i];
    }
    avg = sum / cols;
    return avg;
}

double get_avg(int rows, int cols, double arr[rows][cols])
{
    double sum = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += arr[i][j];
        }
    }
    return sum / (rows * 5);
}

double get_max(int rows, int cols, double arr[rows][cols])
{
    double max = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}