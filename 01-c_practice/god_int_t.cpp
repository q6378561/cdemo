#include <iostream>
using namespace std;

int main() {
//    char p = 'a';
//    cout<<p<<endl;
//    cout<<(int)p<<endl;
//    cout<<(int*)p<<endl;
//    cout<<(int&)p<<endl;
    int a;
    int *p=&a;  //定义指向a的指针p  想存放地址就必须*p
    //  指针就是地址
    cout << p << endl;
    return 0;
}