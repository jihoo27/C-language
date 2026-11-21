#include <iostream>
#include <iomanip>
using namespace std;

struct Point {
    double x;
    double y;
};

int main() {
    Point a, b;

    // 두 점의 좌표 입력
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;

    // 중심점 계산
    double cx = (a.x + b.x) / 2;
    double cy = (a.y + b.y) / 2;

    // 소수 첫째자리까지 출력
    cout << fixed << setprecision(1);
    cout << "Center point = (" << cx << ", " << cy << ")" << endl;

    return 0;
}