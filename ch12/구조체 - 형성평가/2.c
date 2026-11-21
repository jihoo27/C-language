#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string tel;
    string addr;
};

int main() {
    Contact c[3];

    // 세 명의 이름, 전화번호, 주소 입력
    for (int i = 0; i < 3; i++) {
        cin >> c[i].name >> c[i].tel;
        cin.ignore();
        getline(cin, c[i].addr);
    }

    // 사전순으로 이름이 가장 빠른 사람 찾기
    int minIdx = 0;
    for (int i = 1; i < 3; i++) {
        if (c[i].name < c[minIdx].name) {
            minIdx = i;
        }
    }

    // 출력
    cout << "name : " << c[minIdx].name << endl;
    cout << "tel : " << c[minIdx].tel << endl;
    cout << "addr : " << c[minIdx].addr << endl;

    return 0;
}