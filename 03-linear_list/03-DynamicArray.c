//
// Created by lzl on 2021/4/8.
//



#include<stdio.h>
#include <stdlib.h>
#define initsize 100

typedef int ElemType;

typedef struct {
    ElemType *data;
    int length,
        MaxSize;
}SqList;

int main() {
    SqList L, *pl;
    //声明指针变量后 应用箭头去访问
//    pl->data;
    printf("#x\n",L.data);
    L.data = (ElemType *)malloc(initsize* sizeof(ElemType));
    printf("#x\n",L.data);


    return 0;
}