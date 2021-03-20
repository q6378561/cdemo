//
// Created by lzl on 2021/3/20.
//

#include<stdio.h>
int main() {
//    int a = 1;
//
//    int *p = &a;
//
//    float *p1 = (float*)p;

//    ``````````````````````````````````````````````
//    int m;
//
//    int *pm = &m;
//
//    char *cp = (char *)&m;
//    return 0;
    char *p = (char*)2;     // char类型  储存地址为0x2
    int *q = (int *)p + 10;   //    储存地址为0*2a int类型指针强制转化则是16转10  所以输出q为42

    printf("%d\n", q);

    return 0;

    return 0;
}
