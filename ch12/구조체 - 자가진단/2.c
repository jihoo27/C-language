#include <iostream>
#include <string>
using namespace std;

struct Student {
    string school;
    int grade;
};

int main() {
    // 첫 번째 변수: 초기화
    Student s1 = {"Jejuelementary", 6};

    // 두 번째 변수: 입력받음
    Student s2;
    cin >> s2.school >> s2.grade;

    // 출력
    cout << s1.grade << " grade in " << s1.school << " School\n";
    cout << s2.grade << " grade in " << s2.school << " School\n";

    return 0;
}