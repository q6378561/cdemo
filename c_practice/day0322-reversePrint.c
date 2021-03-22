//
// Created by lzl on 2021/3/22.
//

#include<stdio.h>
void reversePrint(int n, int digit) {
    if (digit == 1 ) {
        printf("%d",n);
    } else {
        int p = 1;   // 定义一个取模变量
        int temp = digit;  // 定义一个判断模的变量
        while(--temp > 0){
            p *=10;
        }
        // p 等于 总共位数
        int h = n / p ;  // h 等于取首位
        reversePrint(n % p ,digit-1);  // n%p 等于取剩下位数,并且digit-1
        printf("%d",h);
    }

}
int main() {
    reversePrint(12345,5);
    return 0;
}