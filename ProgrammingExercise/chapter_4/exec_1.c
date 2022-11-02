#include <stdio.h>

int main(void)
{
    char familyname[10];
    char lastname[10];
    printf("Enter your family name.\n");
    scanf("%s",familyname);
    printf("Enter your last name.\n");
    scanf("%s",lastname);
    printf("Your name is %s,%s",lastname,familyname);
    return 0;
}
