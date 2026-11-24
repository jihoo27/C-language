#pragma warning(disable:4996)
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Back";     // 문자열 변수 초기화
    char str2[20] = "Space";
    char str3[20];

    char ch = 'p';
    int n = 3;                  // 함수에 넘겨줄 문자 개수

    // strlen 함수로 str1에 들어 있는 문자열의 길이 구하기
    int len = strlen(str1);
    printf("str1의 길이: %d\n", len);

    // strcpy 함수로 str1 전체를 str3으로 복제하기
    strcpy(str3, str1);
    printf("str1을 str3에 복사: %s\n", str3);

    // strncpy 함수로 str2의 앞쪽 n개(3개) 문자만 str3으로 복제하기
    strncpy(str3, str2, n);
    str3[n] = '\0';             // 문자열의 끝을 표시하는 널 문자 삽입
    printf("str2의 첫 %d 문자를 str3에 복사: %s\n", n, str3);

    return 0;
}