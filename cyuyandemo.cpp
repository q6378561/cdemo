#include <stdio.h>
#include <stdlib.h>

#define InitSize 10   // ˳���ĳ�ʼ����
#define MaxSize 10

// ��̬����
//typedef struct{
//    int length;   // ˳���ĵ�ǰ����
//    int MaxSize;  // ˳�����������
//    int *data;     // ָʾ��̬���������ָ��
//}SqList;          // ˳�������Ͷ���(��̬���䷽ʽ)
//��̬����
typedef struct{
    int data[MaxSize];
    int length;
}SqList;
void InitList(SqList & L){     // ���Լ����Ϊ�����e��ֵ�����ı䲢��Ҫ�˸ı��ܷ��ص�����������Ҫ��&���š�
    L.length = 0;
//    for (int i = 0; i <MaxSize ; ++i) {
//        L.data[i] =i;
//        L.length ++;
//
//    }
}
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
//    printf("L.data��ǰΪ:%d\n",L.data);
//    IncreaseSize(L,5);
//    ListInsert(L,3,3);


    return 0;

}