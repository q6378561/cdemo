#include <iostream>
using namespace std;
// ð������1
int main() {
    int arr[3][3] = {
            {100,100,100},
            {90,50,100},
            {60,70,80}
    };
    string arrname[3] = {"����","����","����"};
    for (int i = 0; i < 3; ++i) {
        int sum = 0;
        for (int j = 0; j < 3; ++j) {
            sum += arr[i][j];
        }
        cout << arrname[i]<<sum << endl;
    }


    return 0;
}
