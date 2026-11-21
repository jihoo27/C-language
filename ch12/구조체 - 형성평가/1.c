#include <iostream>
#include <string>
using namespace std;

struct Contact {
    string name;
    string tel;
    string addr;
};

int main() {
    Contact c;

    // 이름, 전화번호, 주소를 입력
    cin >> c.name >> c.tel;
    cin.ignore();
    getline(cin, c.addr);

    // 출력
    cout << "name : " << c.name << endl;
    cout << "tel : " << c.tel << endl;
    cout << "addr : " << c.addr << endl;

    return 0;
}