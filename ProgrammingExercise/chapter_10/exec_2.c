// 2.编写一个程序，初始化一个double类型的数组，然后把该数组的内容
// 拷贝至3个其他数组中（在main()中声明这4个数组）。使用带数组表示法的
// 函数进行第1份拷贝。使用带指针表示法和指针递增的函数进行第2份拷贝。
// 把目标数组名、源数组名和待拷贝的元素个数作为前两个函数的参数。第3
// 个函数以目标数组名、源数组名和指向源数组最后一个元素后面的元素的指
// 针。也就是说，给定以下声明，则函数调用如下所示：
// double　source[5]　=　{1.1,　2.2,　3.3,　4.4,　5.5};
// double　target1[5];
// double　target2[5];
// double　target3[5];
// copy_arr(target1,　source,　5);
// copy_ptr(target2,　source,　5);
// copy_ptrs(target3, source, source + 5);
#include <stdio.h>
// prototype declarations
void copy_arr(double *target, double *source, int arr_len);               // copy with array notation
void copy_ptr(double *target, double *source, int arr_len);               // copy with pointer notation
void copy_ptrs(double *target, double *source_start, double *source_end); // copy with two pointers

int main()
{
    double source[5] = {1.1,
                        2.2,
                        3.3,
                        4.4,
                        5.5};
    double target1[5];
    double target2[5];
    double target3[5];
    copy_arr(target1, source, 5);
    copy_ptr(target2, source, 5);
    copy_ptrs(target3, source, source + 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t", target1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t", target2[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.1f\t", target2[i]);
    }
}

void copy_arr(double *target, double *source, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        target[i] = source[i];
    }
}

void copy_ptr(double *target, double *source, int arr_len)
{
    for (int i = 0; i < arr_len; i++)
    {
        *(target + i) = *(source + i);
    }
}

void copy_ptrs(double *target, double *source_start, double *source_end)
{

    for (double *ptr = source_start; ptr < source_end; ptr++, target++)
        *target = *ptr;
}