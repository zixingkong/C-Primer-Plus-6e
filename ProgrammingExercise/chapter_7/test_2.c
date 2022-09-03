#include <stdio.h>
#define STOP '#'
#define SPACE ' '
#define TAB '\t'
#define NEWLINE '\n'
#define BACKSPACE '\b'

int main(void)
{
    unsigned int num = 0;
    char ch;
    printf("ASCII Character Codes\n");
	printf("Enter input (%c to stop):\n", STOP);
    while((ch=getchar()) != STOP)
    {
        switch(ch)
        {
            case SPACE:
                break;
            case TAB:
                break;
            case NEWLINE:
                break;
            case BACKSPACE:
                break;
            default:
                printf(" %c : %3d ", ch, ch);
        }
        num++;
        if(num % 8 ==0)
        {
            printf("\n");
        }
    }
    printf("\n");
    return 0;
}
