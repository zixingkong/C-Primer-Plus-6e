#include <stdio.h>
#define LperG 3.785

int main(void)
{
    const float MperK = 1.609;
    float travel_miles;
    float sino;
    printf("Enter trave miles : ");
    scanf("%f",&travel_miles);
    printf("Enter sino : ");
    scanf("%f",&sino);
    printf("消耗每加仑汽油行驶的英里数: %.1f\n",travel_miles/sino);
    printf("转换成升每公里: %.1f\n",travel_miles*MperK/(sino*LperG));
    return 0;
}
