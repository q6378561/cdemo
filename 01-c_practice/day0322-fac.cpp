//
// Created by lzl on 2021/3/22.
//
#include<stdio.h>
#include <stdlib.h>
//int fac(int n ){
//    if(n == 0 || n == 1){
//        return 1;
//    } else {
//        return n * fac(n-1);
//    }
//}
typedef struct{
    int num;
    char *name;
    int score;
}Student;

Student *getHighScoreStudent(Student *s1,Student *s2){
    return s1->score > s2 -> score ? s1 : s2;
};

void PrintStudent(Student &s){
    printf("%d\n",s.num);
    printf("%d\n",s.score);
    printf("%s\n",s.name);
}
int main() {
    Student *s1 = (Student *)malloc(sizeof(Student))
    ,       *s2 = (Student *)malloc(sizeof(Student));
    s1->name = "傻逼";
    s1->num = 1;
    s1->score = 89;

    s2->name = "特朗普";
    s2->num = 2;
    s2->score = 18;
    Student s = *getHighScoreStudent(s1,s2);
    PrintStudent(s);






    return 0;
}