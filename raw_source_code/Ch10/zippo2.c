/* zippo2.c --  zippo info via a pointer variable */
#include <stdio.h>
int main(void)
{
       int zippo[4][2] = {{2, 4}, {6, 8}, {1, 3}, {5, 7}};
       // 声明一个数组的指针，该指针指向一个内含两个int 类型元素的数组
       int(*pz)[2];
       pz = zippo;
       // pz和pz+1地址相差8个字节
       printf("   pz = %p,    pz + 1 = %p\n",
              pz, pz + 1);
       // pz[0]和pz[0]+1地址相差4个字节
       printf("pz[0] = %p, pz[0] + 1 = %p\n",
              pz[0], pz[0] + 1);
       // 同pz[0]和pz[0]+1
       printf("  *pz = %p,   *pz + 1 = %p\n",
              *pz, *pz + 1);
       // 2
       printf("pz[0][0] = %d\n", pz[0][0]);
       // 2
       printf("  *pz[0] = %d\n", *pz[0]);
       // 2
       printf("    **pz = %d\n", **pz);
       // 3
       printf("      pz[2][1] = %d\n", pz[2][1]);
       // 3
       printf("*(*(pz+2) + 1) = %d\n", *(*(pz + 2) + 1));

       return 0;
}
