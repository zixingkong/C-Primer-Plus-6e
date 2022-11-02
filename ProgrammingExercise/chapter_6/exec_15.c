#include <stdio.h>
int main(void)
{
    char char_array[255];
    int count = 0;

    printf("Enter a line to reverse:\n");
    while(scanf("%c",&char_array[count]) && char_array[count] != '\n    ')
    {
        count++;
    }

    for(;count>=0;count--)
    {
        printf("%c",char_array[count]);
    }

    return 0;
}
