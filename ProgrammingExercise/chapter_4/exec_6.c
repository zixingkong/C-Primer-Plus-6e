#include <stdio.h>
#include <string.h>
int main(void)
{
    char fn[20];
    char ln[20];
    printf("Enter yout last name  : ");
    scanf("%s",ln);
    printf("Enter yout family name  : ");
    scanf("%s",fn);
    int fl = strlen(fn);
    int ll = strlen(ln);
    printf("%s\t%s\n",ln,fn);
    printf("%*d\t%*d\n",ll,ll,fl,fl);
    printf("%s\t%s\n",ln,fn);
    printf("%*d\t%*d\n",-ll,ll,-fl,fl);
    return 0;
}
