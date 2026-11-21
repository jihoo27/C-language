#include <stdio.h>

int main() {
    //Person 구조체를 생성
    //멤버변수 이름, 나이를 저장할 변수를 선언
    struct Person{
        char name[30];
        int age;
    };

    //scanf -> 구조체 멤버 변수에 저장(접근 어떻게?)
    struct Person p;  //p는 인스턴스 변수
    // 구조체제어변수.멤버변수
    scanf("%29s", p.name);  //문자열 배열의 주소 넘겨주는 방법
    scanf("%d", &p.age);

    printf("Your name is %s and you are %d years old.", 
            p.name, p.age);
}