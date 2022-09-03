/* 正数上溢，浮点数上溢和下溢*/
#include <stdio.h>

void main(void)
{
    printf("Type int has a size of %zd bytes.\n",sizeof(int));
    printf("Type float has a size of %zd bytes.\n",sizeof(float));
    int toobigint = 2147483647 * 10;
    float toobigfloat = 4.2e10 * 1.0e10000;
    float toosmalfloat = 0.12345678E-10 / 1.0e10;
    printf("%d\n",toobigint);
    printf("%e\n",toobigfloat);
    printf("%e\n",toosmalfloat);
    return 0;
}
