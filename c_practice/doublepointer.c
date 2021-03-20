#include<stdio.h>
int main() {

    int i = 5, j = 6, k = 7;
    int *ip1 = &i, *ip2 = &j;   // 定义ip1和ip2两个指针 地址分别是i 和 j的地址值
    int **ipp = &ip1;  // 定义二级指针  取地是ip1的地址  又因为ip1是指针 所以直接指向i

    *ipp = ip2;  //  ipp存的是二级指针地址  *ipp存的是一级指针地址 **ipp存的是最原始地址的值


    return 0;
}

