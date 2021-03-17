//
// Created by lzl on 2020/9/18.
//

#include <iostream>
using namespace std;
struct Student{
    string sname;
    int score;
};
struct Teacher{
    string Tname;
    struct Student sarray[5];
};
void transarray(struct Teacher array[],int len) {
    string nameSpace = "ABCDE";
    for (int i = 0; i < len ; ++i) {
        array[i].Tname = "Teacher_";
        array[i].Tname += nameSpace[i];
        for (int j = 0; j < 5; ++j) {
            array[i].sarray[j].sname = "Student_" ;
            array[i].sarray[j].sname += nameSpace[j] ;
            array[i].sarray[j].score = 60 ;
        }
    }
}
void Printarray(struct Teacher array[],int len){
    for (int i = 0; i <len ; ++i) {
        cout << array[i].Tname << endl;
        for (int j = 0; j <5 ; ++j) {
            cout << array[i].sarray[j].sname << array[i].sarray[j].score<<endl ;
        }

    }
}
int main() {
    Teacher tarray[3];
    // 传输老师和学生信息函数
    transarray(tarray,3);
    Printarray(tarray,3);


    return 0;
}