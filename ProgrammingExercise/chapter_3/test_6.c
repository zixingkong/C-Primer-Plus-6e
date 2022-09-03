#include <stdio.h>

void main(void)
{
    int kuatuos;
    float weightPerWater = 3.0e-23;
    int gsPerKuatuo = 950;
    printf("Enter Kuatuo: ");
    scanf("%d",&kuatuos);
    printf("Water number : %d",kuatuos * gsPerKuatuo / weightPerWater);
    return 0;

}
