#include <stdio.h>
int main(void)
{
    const double chu = 100.0f;
    const double increse = 0.08f;
    int i = 0;
    double rest=chu;
    while(rest > 0)
    {
        rest *= 1.0f + increse;
        rest -= 10;
        i++;
    }
    printf("After %d years,Chuckie have no money.",i);
    return 0;
}
