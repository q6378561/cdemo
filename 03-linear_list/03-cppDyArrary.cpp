//
// Created by lzl on 2021/4/10.
//

//
// Created by lzl on 2021/4/8.
//



#include<stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define initsize 100

typedef int ElemType;

typedef struct {
    ElemType * data;
    int length,
        MaxSize;
}SqList;


bool Insert(SqList &L, int i,ElemType e){
    // L是顺序表 i是要插入的位置 e是要插入的元素
//     下标i不能小于1
//     下标i能大于要插入的表长度+1 +1是因为i可以当长度加1的length
    if(i < 1 || i > L.length + 1){
        return false;
    }

    if(L.length + 1 > L.MaxSize){
        return false;
    }
    //  1 2 3 4 5
    // 令j = 1 当j小于5 , j ++
//    for (int j = i; j < L.length; ++j) {
//        // L[2] = L[1]
//        // L[3] = L[2] X
//        L.data[j+1] = L.data[j];
//    }
    // 令j = L的长度 当j大于等于 i 时 j减1
    // i是位序
    //   j相当于相对指针  每处理完一个指针之后就向前走
    for (int j = L.length;j >= i;j--) {
        // L[J] 相当于新开拓的空间
        L.data[j] = L.data[j-1];
    }

    L.data[i-1] = e;
    L.length ++;

    return true;


}
void displaySqList(SqList t){
    for (int i=0;i<t.length;i++) {
        printf("%d",t.data[i]);
    }
    fflush(stdout);
    printf("\n");

}
void InitList(SqList &L){
    L.data = (int *)malloc(initsize*sizeof(int));
    L.length = 0;
    L.MaxSize = initsize;
}

bool deleteList(SqList &L,int i){
    if(i < 1 || i > L.length + 1){
        return false;
    }

//    for (int j = i; j < L.length-1 ; ++j) {
//        L.data[j] = L.data[j+1];
//    }
//  当位序位于最后一位时直接跳过循环进行长度-1操作
// 但是内存空间实际上并没有完成删除

    for (int k = i; k < L.length; ++k) {
        L.data[k-1] = L.data[k];
    }
    L.length --;


}
int LocateElem(SqList &L, ElemType e){
    for (int i = 0; i < L.length ; ++i) {
        if (L.data[i] == e) {
            return i + 1;
        }
    }
    return 0;



}
int main() {
    // 随机数种子
    srand((unsigned)time(NULL));

    //定义数据结构SqList 将其名义为L
    SqList L;
    //初始化数据结构L
    InitList(L);

    for (int i=1; i<=5; i++) {
        L.data [i-1] = i;
        L.length++;
    }

    displaySqList(L);
    Insert(L,5,10);
    displaySqList(L);
    deleteList(L,6);
    displaySqList(L);

//    //声明指针变量后 应用箭头去访问
////    pl->data;
//    printf("#x\n",L.data);
//    L.data = (ElemType *)malloc(initsize* sizeof(ElemType));
//    printf("#x\n",L.data);


    return 0;
}