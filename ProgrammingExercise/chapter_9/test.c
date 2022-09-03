#include <stdio.h>
int main(void)
{
    int a = 0;
    int * pa = &a;

    printf("a = %d\n",a);
    printf("&a = %p\n",&a);
    printf("pa = %p\n",pa);
    return 0;
}
