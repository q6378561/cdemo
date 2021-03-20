#include <iostream>
using namespace std;
// 值传递
//void swap01(int a,int b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "swap01里面a="<< a << endl;
//    cout << "swap01里面b="<< b << endl;
//}
// 地址传递
void swap02(int *p1,int *p2){  // 定义p1和p2两个指针
    int temp = *p1;      //  *是取值符  指针是地址 取值后将值传入temp
    *p1 = *p2;
    *p2 = temp;
}
int main() {
    int a = 10;
    int b = 20 ;
    swap02(&a,&b);   //把a和b的地址传入到函数中
    cout<< a << endl;
    cout << b << endl;

//    swap01(a,b);


    return 0;
}
