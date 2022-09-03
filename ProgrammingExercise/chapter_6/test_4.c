#include <stdio.h>
int main(void)
{
    char be = 'A';
    int row,col;

    for(row=0;row<6;row++)
    {
        for(col=0;col<=row;col++,be++)
        {
            printf("%c",be);
        }
        printf("\n");
    }
    return 0;
}
