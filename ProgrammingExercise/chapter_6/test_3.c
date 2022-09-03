#include <stdio.h>
int main(void)
{
    char be = 'F';
    int i;
    int j;
    for(i=0;i<6;i++)
    {
        for(j=0;j<=i;j++)
        {
            printf("%c",be-j);
        }
        printf("\n");
    }
}
