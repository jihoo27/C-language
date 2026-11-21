#include <iostream>
#include <string>
using namespace std;

int main() {
    // 자신의 이름과 나이는 초기화
    string myName = "Yejun";
    int myAge = 12;

    // 친구의 이름과 나이는 입력받음
    string friendName;
    int friendAge;
    cin >> friendName >> friendAge;

    // 출력
    cout << "Your name: " << myName << ", age: " << myAge << "\n";
    cout << "Friend's name: " << friendName << ", age: " << friendAge << "\n";

    return 0;
}