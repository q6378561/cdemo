//
// Created by lzl on 2020/9/18.
//
// �ṹ������������
// ����ָ�����ֱ�ӸĽṹ��
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
    //ָ��
}
int main() {
    Student st;
    st.age = 20;
    st.name = "����";
    st.score = 100;
    printStudent2(&st);
    
    cout << "main��ӡ" << st.age << st.name << st.score << endl;
    
    

    return 0;
}