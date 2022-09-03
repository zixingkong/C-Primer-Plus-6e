#include <stdio.h>

void main(void)
{
    int cups;
    printf("Enter cup numbers : ");
    scanf("%d",&cups);
    printf("Pintuo : %f\n",cups / 2.0);
    printf("Angsi : %d\n",cups * 8);
    printf("Tangshao : %d\n",cups * 8 * 2);
    printf("Chashao : %d\n",cups * 8 * 2 * 3);
    return 0;
}
