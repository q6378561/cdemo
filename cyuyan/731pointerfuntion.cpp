#include <iostream>
using namespace std;
// ֵ����
//void swap01(int a,int b)
//{
//    int temp = a;
//    a = b;
//    b = temp;
//    cout << "swap01����a="<< a << endl;
//    cout << "swap01����b="<< b << endl;
//}
// ��ַ����
void swap02(int *p1,int *p2){  // ����p1��p2����ָ��
    int temp = *p1;      //  *��ȡֵ��  ָ���ǵ�ַ ȡֵ��ֵ����temp
    *p1 = *p2;
    *p2 = temp;
}
int main() {
    int a = 10;
    int b = 20 ;
    swap02(&a,&b);   //��a��b�ĵ�ַ���뵽������
    cout<< a << endl;
    cout << b << endl;

//    swap01(a,b);


    return 0;
}
