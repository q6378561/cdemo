#include <iostream>
using namespace std;
// 冒泡排序
int main() {
    int arr[9] = {4,2,8,0,5,7,1,3,9};
    for (int i = 0; i < 9 ; ++i) {
        cout << arr[i] << " ";
    }
    // 通过循环进行比较;
    cout << endl;

    int temp =0;
    // 外层循环进行第一次冒泡排序

    for (int i = 0; i <8 ; ++i) {
        // 8的原因是因为最后只用下标7和7+1进行比较 所以判断值为8
        for (int j = 0; j <8-i ; ++j) {
            // 每执行一次最后一次不用排序了所以只用
            // 注意下标越界问题
            // 每天复习一遍冒泡排序
            if(arr[j]>arr[j+1])
            {
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    for (int i = 0; i < 9 ; ++i) {
        cout << arr[i] << " ";
    }
    return 0;
}