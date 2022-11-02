// C Primer Plus
// Chapter 6 Exercise 5:

// Have a program request the user to enter an uppercase letter. Use nested loops
// to produce a pyramid pattern like this:
//      A
//     ABA
//    ABCBA
//   ABCDCBA
//  ABCDEDCBA
// The pattern should extend to the character entered. For example, the preceding
// pattern would result from an input value of E.
#include <stdio.h>
void print_spaces(unsigned int n);
int main(void)
{
    char upcase_letter;
    char c1,c2;

    do
    {
        printf("Enter a upcase letter :");
        scanf("%c",&upcase_letter);
    }while(upcase_letter < 'A' || 'Z' < upcase_letter);

    for(c1='A';c1<=upcase_letter;c1++)
    {
        print_spaces(upcase_letter-c1);

        for(c2='A';c2<c1;c2++)
        {
            printf("%c",c2);
        }
        for(;'A'<=c2;c2--)
        {
            printf("%c",c2);
        }

        print_spaces(upcase_letter-c1);
        printf("\n");
    }
    return 0;
}

void print_spaces(unsigned int n)
{
    for(int i=0;i<n;i++)
    {
        printf(" ");
    }

}


