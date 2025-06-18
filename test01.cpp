#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = -3;
    unsigned int j = 2;
    printf("%d\n", i-j);//-5

    // // C语言定点整数,强制类型转换
    // short x = -4321;
    // unsigned short y = (unsigned short)x;
    // printf("%d\n", y); // 61215

    // // 截断
    // int a = 165537;
    // int b = -34991;
    // short c = (short)a;
    // short d = (short)b;
    // printf("%d\n", c); //-31071
    // printf("%d\n", d); // 30545

    // // 短变长
    // short x1 = -4321;
    // int m = x1;
    // printf("%d\n", m); //-4321

    // unsigned short n = (unsigned short)x1;
    // unsigned int p = n;
    // printf("%d\n", p); // 61215

    // //字节数
    // printf("%d\n",sizeof(short));//2
    // printf("%d\n",sizeof(unsigned short));//2
    // printf("%d\n",sizeof(unsigned ));//4
    // printf("%d\n",sizeof(int));//4

    // int si = 65536;
    // short i = si;
    // unsigned j = 0;
    // if (i<=j-1)
    // {
    //     printf("wangdao\n");//yes
    // }else{
    //     printf("jisaunjijiaoyu\n");
    // }
    
    // int xa=127;
    // short ya=-9;
    // int za;
    // za=xa+ya;
    // printf("%d\n",xa);//127
    // printf("%d\n",ya);//-9
    // printf("%d\n",za);//118

    // int ii=32777;
    // short ssi=i;
    // int jj=ssi;
    // printf("%d\n",ssi);//0
    // printf("%d\n",jj);//0

    return 0;
}
