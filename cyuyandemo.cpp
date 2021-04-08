#include <stdio.h>
#include <stdlib.h>

#define InitSize 10   // 顺序表的初始长度
#define MaxSize 10

// 动态分配
//typedef struct{
//    int length;   // 顺序表的当前长度
//    int MaxSize;  // 顺序表的最大容量
//    int *data;     // 指示动态分配数组的指针
//}SqList;          // 顺序表的类型定义(动态分配方式)
//静态分配
typedef struct{
    int data[MaxSize];
    int length;
}SqList;
void InitList(SqList & L){     // 可以简单理解为：如果e的值发生改变并需要此改变能返回到主函数则需要加&符号。
    L.length = 0;
    for (int i = 0; i <MaxSize ; ++i) {
        L.data[i] =i;
        L.length ++;

    }
}
// linear_list
//void InitList(SqList &L){
//    L.data = (int *)malloc(InitSize*sizeof(int));
//    L.length = 0;
//    L.MaxSize = InitSize;
//}
//void IncreaseSize(SqList &L,int len){
//    int *p = L.data;
//    L.data = (int *)malloc((InitSize+len)* sizeof(int));
//    for (int i = 0; i <L.length ; ++i) {
//        L.data[i] = p[i];
//    }
//    L.MaxSize = L.MaxSize +len;
//    free(p);
//}


void ListInsert(SqList &L,int i,int e){
    for (int j = L.length; j > i ; j--) {
        L.data[j] = L.data[j-1];
    }
    L.data[i-1] = e;
    L.length ++;


}
int main ()
{
//    int a = 0;
//    int *p = &a;
//    test(p);
    SqList L;
    InitList(L);
    printf("L.data当前为:%d\n",L.data);
//    IncreaseSize(L,5);
//    ListInsert(L,3,3);


    return 0;

}