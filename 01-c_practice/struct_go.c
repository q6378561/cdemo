//
// Created by lzl on 2021/3/21.
//

#include <stdio.h>

#define MaxSize 50

//typedef struct {
//    int age;
//    double high;
//} Person, *PPerson, Persons[MaxSize];
//
//typedef struct Person {
//    struct Person *mate;
//    int age;
//    double high;
//} Person;


int main() {
//    Persons ps;
//    ps[0].age = 14;
//    printf("%d\n",ps[0].age);

//    Person p;
//    PPerson pfq = &p;
//    pfq->age = 12;
//    printf("%d\n",pfq->age);

//    Person p1;
//    Person p2;
//    p1.age = 23;
//    p2.age = 24;
//    p1.mate = &p2;
//    p2.mate = &p1;
//
//    printf("%d\n",p1.age);
//    printf("%d\n",p1.mate->age);

    int a = 1, b = 2, c = 3, d = 4;

    //声明了一个数组，数组内存放的元素是指针
    //指针的值是整数a, b, c, d的地址
    int* p[4] = { &a, &b, &c, &d };

    //①
    //输出整数a, b, c, d的地址
    printf("%d\n", &a);
    printf("%d\n", &b);
    printf("%d\n", &c);
    printf("%d\n", &d);

    //②
    //输出(数组内的元素 即《指针》 的地址)  地址的地址！！！
    //说明先找到数组首元素的地址，再往后读取i个数的地址
    //输出首元素的地址、第二个元素的地址、第三个元素的地址……
    //       输出的是p指针数组本身生成的地址  而不是p指针数组存放的指针地址
    printf("\n");
    printf("%d\n", p);
    printf("%d\n", p + 1);
    printf("%d\n", p + 2);
    printf("%d\n", p + 3);

    //③
    //p所指位置后方第i个数的内容
    //输出整数a, b, c, d的地址
    //这里的p指的是数组首元素的地址
    //首先解析p得到首元素的值（这个值是&a，即a的地址），再在该地址基础上向后读取第i个数的值
    printf("\n");
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("%d\n", *(p + 2));
    printf("%d\n", *(p + 3));

    //④
    //输出数组内的元素，即整数a, b, c, d的地址
    printf("\n");
    printf("%d\n", p[0]);
    printf("%d\n", p[1]);
    printf("%d\n", p[2]);
    printf("%d\n", p[3]);

    //⑤
    //解析数组内的元素，即解析指针
    //最终输出整数a, b, c, d的地址
    printf("\n");
    printf("%d\n", *p[0]);
    printf("%d\n", *p[1]);
    printf("%d\n", *p[2]);
    printf("%d\n", *p[3]);

    //⑥
    //解析整数a, b, c, d的地址并输出
    printf("\n");
    printf("%d\n", **p);
    printf("%d\n", **(p + 1));
    printf("%d\n", **(p + 2));
    printf("%d\n", **(p + 3));

    return 0;
}