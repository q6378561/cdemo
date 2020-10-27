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
            {"Áõ±¸",23,"ÄĞ"},
            {"¹ØÓğ",22,"ÄĞ"},
            {"ÕÅ·É",19,"ÄĞ"},
            {"ÕÔÔÆ",21,"ÄĞ"},
            {"õõ²õ",20,"Å®"}
    };
    buddle(harray,5);
    for (int i = 0; i < 5; ++i) {
        cout << harray[i].name <<harray[i].age << endl;


    }


    return 0;
}