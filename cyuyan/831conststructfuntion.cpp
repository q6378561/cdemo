//
// Created by lzl on 2020/9/18.
//

#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    int score;
};
void printpointer(const int *p1){
    *p1 = 100;
    cout << *p1 << endl;
}
int main() {
    int a = 20;
    int *p = &a;
    printpointer(p);
    cout << a << endl;
    return 0;
}