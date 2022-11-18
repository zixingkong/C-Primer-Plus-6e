/* zippo1.c --  zippo info */
#include <stdio.h>
int main(void)
{
       int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
       // zippo是二维数组的首元素地址，zippo+1为二维数组第二个元素的地址
       printf("   zippo = %p,    zippo + 1 = %p\n",
              zippo, zippo + 1);
       // zippo[0]为二维数组第一个元素数组的首元素的地址，zippo[0] + 1为为二维数组第一个元素数组的第二个元素的地址
       printf("zippo[0] = %p, zippo[0] + 1 = %p\n",
              zippo[0], zippo[0] + 1);
       // *zippo = zippo[0],*zippo + 1 = zippo[0] + 1
       printf("  *zippo = %p,   *zippo + 1 = %p\n",
              *zippo, *zippo + 1);
       // 2
       printf("zippo[0][0] = %d\n", zippo[0][0]);
       // 2
       printf("  *zippo[0] = %d\n", *zippo[0]);
       // 2
       printf("    **zippo = %d\n", **zippo);
       // 3
       printf("      zippo[2][1] = %d\n", zippo[2][1]);
       // 3
       printf("*(*(zippo+2) + 1) = %d\n", *(*(zippo + 2) + 1));

       return 0;
}
