#include <iostream>
#include <algorithm>
using namespace std;

struct Rect {
    int x1, y1;  // 왼쪽 아래
    int x2, y2;  // 오른쪽 위
};

int main() {
    Rect a, b, r;

    // 두 직사각형 입력
    cin >> a.x1 >> a.y1 >> a.x2 >> a.y2;
    cin >> b.x1 >> b.y1 >> b.x2 >> b.y2;

    // 두 직사각형을 포함하는 최소 직사각형
    r.x1 = min(a.x1, b.x1);
    r.y1 = min(a.y1, b.y1);
    r.x2 = max(a.x2, b.x2);
    r.y2 = max(a.y2, b.y2);

    // 출력
    cout << r.x1 << " " << r.y1 << " " << r.x2 << " " << r.y2 << endl;

    return 0;
}