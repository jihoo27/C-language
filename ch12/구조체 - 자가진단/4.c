#include <iostream>
#include <string>
using namespace std;

struct Person {
    string name;
    int height;
};

int main() {
    Person p[5];

    // 5명의 이름과 키 입력
    for (int i = 0; i < 5; i++) {
        cin >> p[i].name >> p[i].height;
    }

    // 키가 가장 작은 사람 찾기
    int minIdx = 0;
    for (int i = 1; i < 5; i++) {
        if (p[i].height < p[minIdx].height) {
            minIdx = i;
        }
    }

    // 출력
    cout << p[minIdx].name << " " << p[minIdx].height << endl;

    return 0;
}