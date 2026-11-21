#include <iostream>
#include <string>
using namespace std;

struct Student {
    string name;
    int score;
};

int main() {
    Student s[5];

    // 5명의 이름과 점수 입력
    for (int i = 0; i < 5; i++) {
        cin >> s[i].name >> s[i].score;
    }

    // 최고 점수 학생 찾기
    int maxIdx = 0;
    for (int i = 1; i < 5; i++) {
        if (s[i].score > s[maxIdx].score) {
            maxIdx = i;
        }
    }

    // 출력
    cout << s[maxIdx].name << " " << s[maxIdx].score << endl;

    return 0;
}