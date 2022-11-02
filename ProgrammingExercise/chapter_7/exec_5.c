#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    unsigned int number = 0;
    printf("Enter input (%c to exit):\n", STOP);
    while((ch=getchar()) != STOP)
    {
        switch(ch)
        {
            case '.':
                printf("!");
                number++;
                break;
            case '!':
                printf("!!");
                number++;
                break;
            default :
                printf("%c",ch);
        }
    }
    printf("Replace %d times",number);
    return 0;
}

