#include <stdio.h>
#include <string.h>

int main(void)
{
    char name[20];
    int width;
    printf("Please enter your name : ");
    scanf("%s",name);
    printf("Your name is \"%s\" .\n",name);
    printf("Your name is \"%20s\" .\n",name);
    printf("Your name is \"%-20s\" .\n",name);
    width = strlen(name) + 3;
    printf("Your name is \"%*s\" .\n",width,name);
    return 0;

}
