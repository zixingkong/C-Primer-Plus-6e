#include <stdio.h>
int main(void)
{
    float height;
    char name[15];
    printf("Enter your name : ");
    scanf("%s",name);
    printf("Enter your height : ");
    scanf("%f",&height);
    printf("%s, you are %.3f tall.\n",name,height/100);
    return 0;
}
