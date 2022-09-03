#include <stdio.h>
#define STOP '#'
int main(void)
{
    unsigned int spaces=0;
    unsigned int newlines=0;
    unsigned int other=0;
    char ch;
    printf("Enter input (%c to stop):\n", STOP);
    while((ch=getchar()) != '#')
    {
        if(ch == ' ')
            spaces++;
        else if(ch == '\n')
            newlines++;
        else
            other++;

    }
    printf("\n");
	printf("Character Count:\n");
	printf("----------------\n");
	printf("Spaces: %u\n"
		   "Newlines: %u\n"
		   "Other: %u\n", spaces, newlines, other);
    return 0;
}
