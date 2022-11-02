#include <stdio.h>
int main(void)
{
    double array1[8];
    double array2[8];
    int be = 0;

    printf("Enter 8 integers:\n");
    for(int i=0;i<8;i++)
    {
        scanf("%lf",&array1[i]);
        be += array1[i];
        array2[i] = be;
    }

    printf("\n");
	// display loops
	printf("      Integers:");
    for(int m=0;m<8;m++)
    {
        printf("%6.2lf  ",array1[m]);
    }
    printf("\n");
	printf("Cumulative sum:");
    for(int m=0;m<8;m++)
    {
        printf("%6.2lf  ",array2[m]);
    }
    return 0;
}
