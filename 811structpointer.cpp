//
// Created by lzl on 2020/9/13.
//

#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    int score;
};
int main() {
    struct Student s = {"����",18,100};
    struct Student *p = &s;
    // p->name == (*p).name
    cout << "����:" <<p->name << " ����:" << p->age << " ����:" << (*p).name;
    return 0;
}