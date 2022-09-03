#include <stdio.h>
#define STOP '#'
int main(void)
{
    char ch;
    int number = 0;
    
    printf("Enter input (%c to exit):\n", STOP);
    while((ch=getchar()) != STOP)
    {
        if(ch == '.')
        {
           printf("!");
           number++; 
        }  
        else if(ch == '!')
        {
            printf("!!");
            number++;
        }
        else
            printf("%c",ch);
    }
    printf("Replace %d times",number);
    return 0;
}
