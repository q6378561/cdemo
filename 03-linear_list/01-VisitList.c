//
// Created by lzl on 2021/4/8.
//

#include<stdio.h>
int main() {
    int L[] =  {1,2,3,4};
    printf("%x\n",L);
    printf("%x\n",&L[0]);
    printf("%x\n",&L[3]);
    printf("%x\n",L+3);


    return 0;
}