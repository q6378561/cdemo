//
// Created by lzl on 2020/9/18.
//
// 结构体做函数参数
// 传入指针可以直接改结构体
#include <iostream>
using namespace std;
struct Student{
    string name;
    int age;
    int score;
};
void printStudent(struct Student s){
    s.age = 100 ;
    cout << s.age << s.name << s.score << endl;
}
void printStudent2(struct Student *p){
    p->age = 100 ;
    cout << p->age << p->name << p->score << endl;
    //指针
}
int main() {
    Student st;
    st.age = 20;
    st.name = "张三";
    st.score = 100;
    printStudent2(&st);
    
    cout << "main打印" << st.age << st.name << st.score << endl;
    
    

    return 0;
}