//
// Created by lzl on 2021/3/21.
//

#include <stdio.h>

int main() {
    int k=2,m=4,n=6;
    int *pk=&k,*pm=&m,*p, &a = n;
    *(p=&n)=*pk*(*pm);
    printf("%d\n",n);
    a = 7;
    printf("%d\n",n);


//    int i =10;
//    int j = 10;
//    printf("%d\n",i++);
//    printf("%d\n",++j);
//    printf("%d\n",i);
//    printf("%d\n",j);

}