//
// Created by lzl on 2021/3/20.
//

#include<stdio.h>
//int get_min(int a,int b,int c){
//    if (a > b) {
//        a = b;
//    }
//    if(a > c ) {
//        a = c;
//    }
//    return a;
//}
// 模拟i++
// 整体返回: i在自增1之前的
// 结束之后: i自增1
//
//int ipp(int *i){
//    int temp = *i;
//    *i += 1;
//    return temp;
//}
void add(int *&x,int *&y){
//    引用的指针
    int a = 3;
    int b = 4;
    x = &a;
    y = &b;
}


int main() {
    int *c ;
    int *b;
    add(c,b);

//    int a = 5;
//    int b = ipp(&a);
//    printf("%d %d\n",b,a);

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
//    char *p = (char*)2;     // char类型  储存地址为0x2
//    int *q = (int *)p + 10;   //    储存地址为0*2a int类型指针强制转化则是16转10  所以输出q为42
//
//    printf("%d\n", q);
//    int a = -1000, b= -100, c= -9;
//    printf("%d\n",get_min(a,b,c));

    return 0;

    return 0;
}
