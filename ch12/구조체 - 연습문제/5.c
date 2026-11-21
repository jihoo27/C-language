#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Person {
    string name;
    int height;
    double weight;
};

// 키가 작은 순으로 비교
bool compare(const Person& a, const Person& b) {
    return a.height < b.height;
}

int main() {
    Person p[5];

    // 5명의 이름, 키, 몸무게 입력
    for (int i = 0; i < 5; i++) {
        cin >> p[i].name >> p[i].height >> p[i].weight;
    }

    // 키가 작은 순으로 정렬
    sort(p, p + 5, compare);

    // 출력
    for (int i = 0; i < 5; i++) {
        cout << p[i].name << " " << p[i].height << " " << p[i].weight << endl;
    }

    return 0;
}