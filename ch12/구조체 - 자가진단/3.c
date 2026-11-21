#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int height;
};

int main() {
    Person p[3];

    // 세 명의 이름과 키 입력
    for (int i = 0; i < 3; i++) {
        cin >> p[i].name >> p[i].height;
    }

    // 출력
    for (int i = 0; i < 3; i++) {
        cout << p[i].name << " : " << p[i].height << "cm" << endl;
    }

    return 0;
}