//
// Created by lzl on 2021/3/21.
//

#include <stdio.h>

#define MaxSize 50

//typedef struct {
//    int age;
//    double high;
//} Person, *PPerson, Persons[MaxSize];

typedef struct Person {
    struct Person *mate;
    int age;
    double high;
} Person;


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
}