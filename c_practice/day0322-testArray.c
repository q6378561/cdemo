//
// Created by lzl on 2021/3/22.
//

#include<stdio.h>
#include <stdlib.h>
void testArray(int *a,int n ){
    // 访问方式一
    for (int i = 0; i < n ; i++) {
        printf("%d\t",a[i]);
    }
    printf("\n");

    // 方式二
    for (int i = 0; i < n ; i++) {
        printf("%d\t",*(a+i));
    }
    printf("\n");
}

int main() {
    // 静态数组测试
    int a[] = {1,2,3,4,5};
    testArray(a,5);
    // 动态数组测试
    int *b = (int *)malloc(sizeof(int)*6);
    for (int i = 0; i < 6 ; i++) {
        *(b+i) = i;
    }
    testArray(b,6);
    return 0;
}