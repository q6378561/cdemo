//
// Created by lzl on 2020/9/18.
//
#include <iostream>
using namespace std;
struct hero{
    string name;
    int age;
    string gender;
};
void buddle(hero sarray[],int len){
    for (int i = 0; i <len-1 ; ++i) {
        for (int j = 0; j <len-i-1 ; ++j) {
            if(sarray[j].age > sarray[j+1].age){
                struct hero temp   = sarray[j];
                sarray[j] = sarray[j+1];
                sarray[j+1] = temp;
            }
        }
    }

}
int main() {
    hero harray[5] {
            {"����",23,"��"},
            {"����",22,"��"},
            {"�ŷ�",19,"��"},
            {"����",21,"��"},
            {"����",20,"Ů"}
    };
    buddle(harray,5);
    for (int i = 0; i < 5; ++i) {
        cout << harray[i].name <<harray[i].age << endl;


    }


    return 0;
}