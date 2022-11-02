#include <stdio.h>
int main(void)
{
    int int_array[8];
    int power = 1;
    for(int i=0;i<8;i++)
    {
        power *= 2;
        int_array[i] = power;
    }
    int i=0;
    do
    {
        printf("%d\n",int_array[i++]);
    }while(i<8);
    return 0;
}
