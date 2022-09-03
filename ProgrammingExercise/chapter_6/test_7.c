#include <stdio.h>
#include <string.h>
int main(void)
{
    char word[30];
    printf("Please enter a word : ");
    scanf("%s",word);
    int len = strlen(word);
    for(int i=len-1;i>=0;i--)
    {
        printf("%c",word[i]);
    }
    return 0;
}
