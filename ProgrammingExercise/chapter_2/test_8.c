#include <stdio.h>
void one_three(void);
void two(void);

void main(void)
{
    printf("starting now:\n");
    one_three();
    printf("done!");

}

void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two()
{
    printf("two\n");
}
