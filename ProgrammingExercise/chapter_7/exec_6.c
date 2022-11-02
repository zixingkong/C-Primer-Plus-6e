#include <stdio.h>
int main(void)
{
    char first_ch,last_ch;
    unsigned int ei_count = 0;

    printf("This program reads input and counts the number of times the\n"
		   "sequence 'ei' occurs (case insensitive).\n");
	printf("Enter input (%c to stop):\n", STOP);
    while((first_ch=getchar()) != '#')
    {
        if(first_ch == 'i' && last_ch == 'e')
            ei_count++;
        last_ch = first_ch;
    }
    printf("The sequence 'ei' occurs %u times.\n", ei_count);
    return 0;
}
