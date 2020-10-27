//
// Created by lzl on 2020/9/13.
//

#include <iostream>
using namespace std;
// 指针常量和常量指针
int main() {
    int a = 10 ;
    int b = 20 ;
    // 区分方法 把*号看作指针二字  *号在前面就是*(指针)常量 *号在后就是常量*(指针)
    // 指针常量
    // 因为cosnt修饰的是p没有修饰解引用也就是就是*号所以可以修改指针指向的值但是不能修改指针指向的地址
//    int * const p = &a;
//    *p = 9;
//    p = &b
//    cout << p << endl;
    // 常量指针
    const int * p = &a;
    // 因为const修饰的是*没有修饰存放地址的变量p,所以常量指针可以修饰地址不能修饰指向的值
//    *p=9;
    cout << p << endl;
    p = &b;
    cout << p << endl;




    return 0;
}