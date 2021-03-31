#include<stdio.h>
#include<stdlib.h>
int accumulation(int n ) {
    int i, sum = 0 ;
    for (int i = 1; i <= n ; ++i) {
        sum = sum + i;
    }
    return sum;
    // 空间复杂度O(1)
}

int* reverseArray(int a[], int n){
    int *b =(int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n ; ++i) {
        b[n-i-1] = a[i]; // b末尾 = a开头 -1是为了对齐下标
    }
    return b;
    // 空间复杂度O(n) 对空间的消耗在malloc
}

int fac(int n){
    if (n == 0 || n == 1) {
        return 1;
    } else {
        int r = n*fac(n-1);
        return r;
    }
}
int main() {
    int a[5] = {1,2,3,4,5};
    int *b = reverseArray(a,5);
    for (int i = 0; i < 5 ; ++i) {
        printf("%d ",b[i]);
    }
    printf("\n%d",fac(5));


    return 0;
}
