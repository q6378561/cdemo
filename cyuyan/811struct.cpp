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
    struct Student stuarry[3] = {
            {"张三",18,100},
            {"李四",19,90},
            {"王五",20,80}
    };
    for (int i = 0; i <3 ; ++i) {
        cout << stuarry[i] .name<< endl;

    }



    return 0;
}