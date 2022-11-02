#include <stdio.h>
int main(void)
{
    char alphabet[26];
    int index;
    char be;

    for(index=0,be='a';index<26;be++,index++)
    {
        alphabet[index] = be;
    }
    for(index=0;index<26;index++)
    {
        printf("%c",alphabet[index]);
    }
    return 0;
}
